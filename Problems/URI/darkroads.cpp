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

long long kruskal(int N, vector<Edge>& Edges) {
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
    int M, N;
    while(cin >> M >> N && M != 0 && N != 0) {
        
        int sum = 0;
        vector<Edge> edges;
        for (int j = 0; j < N; ++j) {
            int u, v, cost;
            scanf("%d %d %d", &u, &v, &cost);
            edges.push_back(Edge(u, v, cost));
            sum += cost;
        }

        long long res = kruskal(M, edges);
        printf("%lld\n", sum-res);
    }
   return 0;
}

