#include <cstdio>
#include <cmath>
#include <vector>
#include <algorithm>
using namespace std;
/*
 Problem from URI ONLINE JUDGE - Rescue in freefall
 * MST: Minimum spanning tree
 * */
class DisjointSet {
   int N;
   int ncomp;
   vector<int> par;
   vector<int> rank;

public:
   DisjointSet(size_t _N) : N(_N), ncomp(_N), par(_N, -1), rank(_N, 0) {}
   void reset() {
      par.assign(N, -1);
      rank.assign(N, 0);
      ncomp = N;
   }
   int size() const {
      return ncomp;
   }
   int find_rep(int u) {
   // path compression
      return par[u] < 0 ? u : par[u] = find_rep(par[u]);
      /*
      vector<int> s;
      while (parent[u] >= 0) {
         s.push_back(u);
         u = parent[u];
      }
      for (int i = 0; i < (int) s.size(); ++i)
         parent[s[i]] = u;
      return u;
      */
   }
   bool union_rep(int u, int v) {
      int u_root = find_rep(u);
      int v_root = find_rep(v);
      if (u_root == v_root)
         return false;
      if (rank[u_root] > rank[v_root])
         par[v_root] = u_root;
      else {
         par[u_root] = v_root;
         if (rank[u_root] == rank[v_root])
            rank[v_root] = rank[u_root] + 1;
      }
      --ncomp;
      return true;
   }
};

struct Edge {
   int u, v;
   int cost;
   Edge(int _u, int _v, int _cost) : u(_u), v(_v), cost(_cost) {}
};

class CostCmp {
public:
   bool operator()(const Edge& e1, const Edge& e2) {
      if (e1.cost != e2.cost) return e1.cost < e2.cost;
      if (e1.u != e2.u) return e1.u < e2.u;
      return e1.v < e2.v;
   }
};


int N, M;
vector<Edge> edges;

// vector<bool> in_mst;
long long kruskal() {
// in_mst.assign( edges.size(), false );
   sort(edges.begin(), edges.end(), CostCmp());
   DisjointSet dset(N);
   long long cost = 0;
   for (int j = 0; j < int(edges.size()) && int(dset.size()) > 1; ++j) {
      if (dset.union_rep(edges[j].u, edges[j].v)) {
         cost += edges[j].cost;
      // in_mst[ edges[j].id ] = true;
      }
   }
   return cost;
}

/*
7 11
0 1 7
0 3 5
1 2 8
1 3 9
1 4 7
2 4 5
3 4 15
3 5 6
4 5 8
4 6 9
5 6 11
*/

int main(int argc, char* argv[]) {
    int c;
    scanf("%d", &c);
    while(c--) {
        int n;
        scanf("%d", &n);
        
        for(int i = 0; i < n; i++) {
            scanf("%d %d", &)
        }
    }

   scanf("%d %d", &N, &M);
   for (int j = 0; j < M; ++j) {
      int u, v,i, j, cost;
      scanf("%d %d %d %d", &u, &v, &i, &j);
      edges.push_back(Edge(u, v, cost));
   }

   long long res = kruskal();
   printf("%lld\n", res);

   return 0;
}

