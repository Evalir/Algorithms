#include <iostream>
#include <vector>
 
using namespace std;
 
struct Edge {
   int from;
   int to;
   int cost;
   bool used;
};

typedef vector<Edge> VE;
typedef vector<VE> VVE;
 
int N;
VVE adj;
 
int comp_size; //holds connected component size
vector<bool> visited;
void dfs(int u) {
   visited[u] = true;
   comp_size++;
   for (Edge e : adj[u]) {
       cerr << "VISITING EDGE " << e.to+1 << " FROM " << e.from+1 << endl;
       if (!visited[e.to]) {
          // e.to es un hijo de u
          dfs(e.to);
       }
       else {
          // e.to es padre de u
       }
   }
}
 
void dfs_all() {
   for (int u = 0; u < N; u++) {
      if (!visited[u]) {
        cout << "ENTERING COMPONENT STARTING AT " << u << endl;
        comp_size = 0;
        dfs(u);
         //cout << comp_size << endl;
      }
   }
}
 
int main() {
 
   cin >> N;
 
   adj = VVE(N);
 
   int cantEjes;
   cin >> cantEjes;
   for (int m = 0; m < cantEjes; m++) {
      int u, v, cost = 0;
      cin >> u >> v; //>> cost;
      u--;
      v--;
      adj[u].push_back({u, v, cost});
      adj[v].push_back({v, u, cost});    // para grafo undirected
   }
 
/*
   for (int u = 0; u < N; u++) {
      cout << "Vertice " << u << " tiene ejes: ";
      for (Edge e : adj[u]) {
         cout << "(" << e.from << "," << e.to << "," << "NO COST" << ") ";
      }
      cout << endl;
   }
*/
 
 
   visited = vector<bool>(N, false);
   dfs_all();
 
}
