#include <cstdio>
#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

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
   double cost;
   Edge(int _u, int _v, double _cost) : u(_u), v(_v), cost(_cost) {}
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
double kruskal(int N, vector<Edge>& Edges) {
// in_mst.assign( edges.size(), false );
   sort(Edges.begin(), Edges.end(), CostCmp());
   DisjointSet dset(N);
   double cost = 0;
   for (int j = 0; j < int(Edges.size()) && int(dset.size()) > 1; ++j) {
      if (dset.union_rep(Edges[j].u, Edges[j].v)) {
         // cerr << "Cost is: " << cost << endl;
         cost += Edges[j].cost;
      // in_mst[ edges[j].id ] = true;
      }
   }
   return cost;
}


int main(int argc, char* argv[]) {
    int t;
    cin >> t;
    
    while(t--) {
        vector<Edge> V;
        int n;
        cin >> n;
        double costs[n][n];
        pair<double,double> coords[n];
        for(int i = 0; i < n; i++) {
            pair<double, double> c;
            cin >> c.first >> c.second;
            c.first /= 100;
            c.second /= 100;
            coords[i] = c;
        }
        
        //calculate distance costs for each node
        for(int i = 0; i < n; i++) {
            for(int j = 0;j < n; j++) {
                if (i != j) {
                    double cost = sqrt(pow(coords[i].first-coords[j].first,2)+ pow(coords[i].second-coords[j].second,2));
                    costs[i][j] = cost;
                }
                else
                    costs[i][j] = -1;
            }
        }
       // cerr << "Costs:\n[ " << endl;
        //print cost matrix
        //for(int i = 0; i < n; i++) {
            
          //  for(int j = 0; j < n; j++) {
              //  cout << costs[i][j] << ' ';
            //}
          //  cout << endl;
        //}
        //push back nodes with costs
        // node i, j, cost : costs[i][j]
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++) {
                if(i != j) {
                    V.push_back(Edge(i, j, costs[i][j]));
                    //cerr << "push back node " << i << ' ' << j << " with cost: " << costs[i][j] << endl;
                }
            }
        }
        
        double res = kruskal(n, V);
        printf("%.2lf\n", res);
        
    }

   return 0;
}
