#include <cstdio>
#include <vector>
#include <algorithm>

using namespace std;

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

int main() {
    int t;
    scanf("%d", &t);
    while(t--) {
        int n;
        scanf("%d", &n);
        DisjointSet DS(n);
        
    }
}

