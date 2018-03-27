#include <iostream>
#include <utility>
#include <algorithm>
#include <cmath>
#include <vector>
using namespace std;

struct Node {
  vector<int> adj;
  int identifier;
  bool isVisited = false;  
};

int totalSubCall = 0;

void dfs(Node& Current, vector<Node>& Nodes, int subCall) {
  Current.isVisited = true;
  for(int id : Current.adj) {
    Node& n = Nodes[id];
    if(!n.isVisited)
      dfs(n, Nodes, subCall+1);    
  }  
  totalSubCall++;
    
}

int main() {
  int t;
  cin >> t;
  while(t--) {
    int n;
    cin >> n;
    totalSubCall = 0;
    int v, e;
    cin >> v >> e;
    vector<Node> V(v);
    for(int i = 0; i < e; i++) {
      int k, m;
      cin >> k >> m;
      V[k].adj.push_back(m);
      V[m].adj.push_back(k);
      V[k].identifier = k;
      V[m].identifier = m;
    }
    
    dfs(V[0], V, 0);
    for(int i = 0; i < v; i++) {
      if(!V[i].isVisited) {
        totalSubCall++;
        dfs(V[i], V, 0);
      }
    }
    
    cout << totalSubCall << endl;
  }
}
