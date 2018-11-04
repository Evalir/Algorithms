#include <bits/stdc++.h>
using namespace std;

struct Cost {
   int ejes;
   int weight;
   bool operator>(const Cost &o) const {
      if (ejes != o.ejes) return ejes > o.ejes;
      return weight > o.weight;
   }
   bool operator<(const Cost &o) const {
      if (ejes != o.ejes) return ejes < o.ejes;
      return weight < o.weight;
   }
   
   Cost operator+(const Cost &o) const {
      return {ejes + o.ejes, weight + o.weight};
   }
};
struct Edge {
  int u, v;
  Cost cost;
};
const int INF = (int)1e9;
void pr(vector< vector<Cost> > &W, int N) {
   for(int i = 0; i < N; i++) {
      for(int j = 0; j < N; j++) {
         printf("(%2d,%2d) ", W[i][j].ejes, W[i][j].weight);
      }
      printf("\n");
   }
}

int main() {
    int N, M;
    scanf("%d%d", &N, &M);
    vector<vector<int>> FW(N, vector<int>(N,INF));
    vector< vector<Cost> > W(N, vector<Cost>(N, {INF,INF}));
    vector<Edge> edges;
    for (int i = 0; i < N; ++i)
        W[i][i] = {0,0};
    for(int i = 0; i < N; i++)
        FW[i][i] = 0;
      
    for (int m = 0; m < M; ++m) {
        int u, v, weight;
        scanf("%d%d%d", &u,&v,&weight);
        u--,v--;
        Cost cost = {0,weight};
        edges.push_back({u,v, cost});
    }
    
    // init floyd warshal with weight
    for (Edge e : edges) {
        FW[e.u][e.v] = min(FW[e.u][e.v], e.cost.weight);
        FW[e.v][e.u] = min(FW[e.u][e.v], e.cost.weight);
    }
    
    // compute floyd warshall
    for(int k = 0; k < N; k++)
        for(int i = 0; i < N; i++)
            for(int j = 0; j < N; j++)
                FW[i][j] = min(FW[i][j], FW[i][k] + FW[k][j]);
       
       
    for(auto &e : edges) {
        if (FW[e.u][e.v] == e.cost.weight) { //is part of shortest path
            e.cost.ejes = 1;
        }
    }
   
    for (Edge e : edges) {
        W[e.u][e.v] = min(W[e.u][e.v], e.cost);
        W[e.v][e.u] = min(W[e.u][e.v], e.cost);
    }
    
    for(int k = 0; k < N; k++)
        for(int i = 0; i < N; i++)
            for(int j = 0; j < N; j++)
                W[i][j] = min(W[i][j], W[i][k] + W[k][j]);
    int Q;
    scanf("%d", &Q);
    //pr(W,N);
    while(Q-- > 0) {
        int u, v;
        scanf("%d%d", &u, &v);
        u--,v--;
        printf("%d\n", W[u][v].weight);
    }
}
