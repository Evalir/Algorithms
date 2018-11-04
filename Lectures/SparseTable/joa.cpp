#include <iostream>

#include <vector>
#include <cmath>
#include <queue>

using namespace std;

typedef vector<int> VI;
typedef vector<VI> VVI;

#define HIGHESTSETBIT(mask) ( sizeof(int)*8-1-__builtin_clz((mask)) )

/*
 * Log Intervals
 * <O(N log N), O(lg N)> LCA
 * M[j][i] is the 2^j-th ancestor of i;
 *    note: indices were switched to improve caching performance
 */

class LCA {
   VVI M;

   int N;
   VI P;   // parent array for tree
   VI L;   // level of each node in tree;  level of root = 0
   void bfs(const VVI& adj, int src) {
      const int INF = 1000000000;
      L = VI(N, INF);
      L[src] = 0;
      P = VI(N, -1);

      queue<int> q;
      q.push(src);
      while (!q.empty()) {
         int u = q.front();
         q.pop();
         for (int j = 0; j < (int) adj[u].size(); ++j) {
            int v = adj[u][j];
            if (L[v] > L[u] + 1) {
               L[v] = L[u] + 1;
               P[v] = u;
               q.push(v);
            }
         }
      }
   }

   void preprocess() {
      // initialize M for every element in P and ancestor path with -1
   // for (LOGN = 0; (1 << LOGN) < N; ++LOGN);
   // int LOGN = N > 1 ? 1+HIGHESTSETBIT(N-1) : 0;  // not tested!!!
      int LOGN = N > 1 ? 1+HIGHESTSETBIT(N) : 1;  // not tested!!!

      M = VVI(LOGN, VI(N, -1));
      /*
      for (int j = 0; (1 << j) < N; j++)
         for (int i = 0; i < N; i++)
            M[j][i] = -1;
      */

      // The first ancestor of every node i is P[i]
      for (int i = 0; i < N; ++i)
          M[0][i] = P[i];

      // For each power of 2 distance, find ancestor
      for (int j = 1; (1 << j) < N; ++j)
         for (int i = 0; i < N; ++i)
             if (M[j - 1][i] != -1)
                 M[j][i] = M[j - 1][ M[j - 1][i] ];
   }

public:
   LCA(const VVI& adj, int root = 0) {
      N = adj.size();
      if (N <= 0) return;

      bfs( adj, root );

      preprocess();
   }

   int query(int p, int q) const {
      // if p is situated on a higher level than q then we swap them
      if (L[p] < L[q])
         swap(p, q);

      // Compute the value of floor( log( L[p] ) )
      int LOGLp = L[p] > 0 ? HIGHESTSETBIT(L[p]) : 0;
      /*
      for (LOGp = 1; (1 << LOGp) <= L[p]; ++LOGp);
      --LOGp;
      */

      // Find the ancestor of node p situated on the same level
      //  with q using the values in M
      for (int j = LOGLp; j >= 0; --j)
         if (L[p] - (1 << j) >= L[q])
            p = M[j][p];
   
      if (p == q)
         return p;

      // Compute LCA(p, q) using the values in M
      for (int j = LOGLp; j >= 0; --j)
         if (M[j][p] != -1 && M[j][p] != M[j][q])
            p = M[j][p], q = M[j][q];

      return P[p];
   }

   // return ancestor with distance d from node u
   int ancestor(int u, int d) const {
      if (L[u] < d) return -1;
      int p = u;
      /*
      if (d > 0) return p;
      for (int j = HIGHESTSETBIT(d); j >= 0; --j)
         if (d & (1<<j))
            p = M[j][p];
      */
      while (d != 0) {
         int j = HIGHESTSETBIT(d);
         p = M[j][p];
         d ^= 1 << j;
      }
      return p;
   }
};





/*
 * Tarjan's LCA is an offline algorithm
 * See https://en.wikipedia.org/wiki/Tarjan's_off-line_lowest_common_ancestors_algorithm
 * O(N*alpha(N) + Q)
 */
class TarjanLCA {

};


/*
 * Reduction to RMQ yields an <O(N), O(1)> algorithm
 * See:
 * https://www.topcoder.com/community/data-science/data-science-tutorials/range-minimum-query-and-lowest-common-ancestor/#Reduction%20from%20LCA%20to%20RMQ
 * http://wcipeg.com/wiki/Lowest_common_ancestor#Reduction_to_RMQ
 */


class RMQ2LCA {
   VI dfs_start;
   VI euler_tour;
   void dfs(const VVI& adj, int u) {
      dfs_start[u] = euler_tour.size();
      euler_tour.push_back(u);
      for (int j = 0; j < (int) adj[u].size(); ++j) {
         int v = adj[u][j];
         if (dfs_level[v] >= 0) continue;
         dfs_level[v] = dfs_level[u] + 1;
         dfs(adj, v);
         euler_tour.push_back(u);
      }
   }

   VI A;
   VVI M;
   void rmq_preprocess() {
      int N = euler_tour.size();
      if (N == 0) return;

      int LOGN = 1 + HIGHESTSETBIT(N);
      M = VVI(LOGN, VI(N, -1));

      for (int i = 0; i < N; i++)
         M[0][i] = i;

      for (int j = 1; (1 << j) <= N; j++) {
         for (int i = 0; i + (1 << j) - 1 < N; i++) {
            if (A[M[j - 1][i]] <= A[M[j - 1][i + (1 << (j - 1))]])
               M[j][i] = M[j - 1][i];
            else
               M[j][i] = M[j - 1][i + (1 << (j - 1))];
         }
      }
   }

public:
   VI dfs_level;

   RMQ2LCA(const VVI& adj, int root = 0) {
      const int N = adj.size();
      dfs_start = VI(N);
      dfs_level = VI(N, -1);
      dfs_level[0] = 0;
      dfs(adj, root);

      A = VI(euler_tour.size());
      for (int j = 0; j < (int) A.size(); ++j)
         A[j] = dfs_level[ euler_tour[j] ];
      rmq_preprocess();
   }

   int query(int p, int q) const {
      int i = dfs_start[p];
      int j = dfs_start[q];
      if (i > j)
         swap(i, j);

      int k = HIGHESTSETBIT(j-i+1);
      int idx;
      if (A[ M[k][i] ] <= A[ M[k][j-(1<<k)+1] ])
         idx = M[k][i];
      else
         idx = M[k][j-(1<<k)+1];
      return euler_tour[idx];
   }

};


/*
             0
          /  |  \
        1    2    3
      /    /   \
    4    5       6
  /              |
7                8
               /    \
             9       10
                      |
                     11
*/

int main(int argc, char* argv[]) {
   VVI adj(12);
   adj[0].push_back(1);
   adj[0].push_back(2);
   adj[0].push_back(3);
   adj[1].push_back(4);
   adj[2].push_back(5);
   adj[2].push_back(6);
   adj[4].push_back(7);
   adj[6].push_back(8);
   adj[8].push_back(9);
   adj[8].push_back(10);
   adj[10].push_back(11);

   RMQ2LCA lca( adj, 0 );

   cout << "LCA(5, 10) = " << lca.query(5, 10) << endl;
   cout << "LCA(3,  8) = " << lca.query(3,  8) << endl;
   cout << "LCA(6, 11) = " << lca.query(6, 11) << endl;
   cout << "LCA(1,  4) = " << lca.query(1,  4) << endl;
   cout << "LCA(0,  0) = " << lca.query(0, 0) << endl;

   return 0;
}

