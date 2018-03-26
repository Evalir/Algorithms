#include <cstdio>
#include <iostream>
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

// vector<bool> in_mst;
long long kruskal(int N, vector<Edge>& Edges) {
// in_mst.assign( edges.size(), false );
   sort(Edges.begin(), Edges.end(), CostCmp());
   DisjointSet dset(N);
   long long cost = 0;
   for (int j = 0; j < int(Edges.size()) && int(dset.size()) > 1; ++j) {
      if (dset.union_rep(Edges[j].u, Edges[j].v)) {
         cost += Edges[j].cost;
      // in_mst[ edges[j].id ] = true;
      }
   }
   return cost;
}


int main(int argc, char* argv[]) {
   int N;
   cin >> N;
   vector<Edge> edges;
   DisjointSet fam(N);
   
   for(int i = 0; i < N - 1; i++ ) {
       int k;
       cin >> k;
       for(int j = 0; j < k; j++) {
           int a, cost;
           cin >> a >> cost;
           a--;
           edges.push_back(Edge(i, a, cost));
           fam.union_rep(i,a);
       }
   }
    int sizefam = fam.size();
   long long res = kruskal(N, edges);
   printf("%d %lld\n", sizefam, res);

   return 0;
}


