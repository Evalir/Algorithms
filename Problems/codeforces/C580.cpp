#include <iostream>
#include <algorithm>
#include <stack>
#include <vector>
#include <cmath>
 
using namespace std;
 
struct Edge {
   int from;
   int to;
   int cost;
   bool hasCat;
};

typedef vector<Edge> VE;
typedef vector<VE> VVE;
 
int N, M;
VVE adj;
vector<bool> cats;
stack<int> lastVisit;
int catCount = 0;
int canGo = 0;
vector<bool> visited;

void printGraph() {
    for (int u = 0; u < N; u++) {
      cout << "Node " << u+1 << " has edges: ";
      for (Edge e : adj[u]) {
         cout << "(" << e.from+1 << "," << e.to+1 << "," << "NO COST" << ") ";
      }
      cout << endl;
   }
}

void dfs(int u) {
   visited[u] = true;
   for (Edge e : adj[u]) {
       //cerr << "VISITING EDGE " << e.to+1 << " FROM " << e.from+1 << " WITH CAT COUNT"<< catCount << endl;
       if (cats[e.to]) {
           catCount++;
           //cout << "COUNTED CAT AT EDGE " << e.from+1 << endl;
           if (catCount > M) {
            //cout << "CANNOT TRAVERSE, TOO MANY MEOWS" << endl;
            catCount = 0;
            break;
           }
        }
       if (!visited[e.to]) {
          // e.to es un hijo de u
          dfs(e.to);
       }
       else if (visited[e.to] && adj[u].size() == 1) {
          if (!cats[e.from]) { //Currently at leaf, ++ on restaurants and reset catCount
            //cout << "RESETING COUNT ON LEAF " << e.from+1 << endl;
            canGo++; 
            catCount = 0;
            break;
         }
       }
   }
}
 
void dfs_all() {
   for (int u = 0; u < N; u++) {
      if (!visited[u]) {
        //cerr << "ENTERING COMPONENT STARTING AT " << u+1 << endl;
        if (cats[u]) catCount++;
        dfs(u);
         //cout << comp_size << endl;
      }
   }
}
 
int main() {
 
   cin >> N >> M;
   adj = VVE(N);

    for(int i = 0; i < N; i++) {
       bool x;
       cin >> x;
       cats.push_back(x);
   }

    for(int i = 0; i < N-1; i++) {
        int u, v, cost = 0;
        cin >> u >> v;
        --u, --v;
        adj[u].push_back({u, v, cost});
        adj[v].push_back({v, u, cost});    // Undirected graph
   }

    //start DFS
    visited = vector<bool>(N, false);
    dfs_all();
    //printGraph();
    cout << canGo << endl;
 
}

/*
7 1
1 0 1 1 0 0 0
1 2
1 3
2 4
2 5
3 6
3 7

*/