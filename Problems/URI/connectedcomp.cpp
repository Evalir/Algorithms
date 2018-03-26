#include <iostream>
#include <utility>
#include <algorithm>
#include <cmath>
#include <vector>
using namespace std;

struct Node {
  vector<int> adj;
  char identifier;
  bool isVisited = false;
  int group;
  bool printed = false;
};
int ncomp = 0;

void dfs(Node& Current, vector<Node>& Nodes, int grid) {
  Current.isVisited = true;
  Current.group = grid;
  for(int id : Current.adj) {
    Node& n = Nodes[id];
    if(!n.isVisited) {
      //cerr << "doing dfs on neighbour " << n.identifier << " at " << id << endl;
      dfs(n, Nodes, grid);  
      
    }  
  }
}

void dfsAll(vector<Node>& Nodes, int n, vector<int>& comp) { 
  for(int i = 0; i < n; i++) {
    if(!Nodes[i].isVisited) {
      Nodes[i].isVisited = true;
      //cerr << "visiting component of " << Nodes[i].identifier << " at " << i << endl;
      ncomp++;
      comp.push_back(i);
      dfs(Nodes[i], Nodes,i);
    }
  }
}

/*
 1
 3 1
 a c
 * */

int main() {
  int t;
  cin >> t;
  while(t--) {
    int count = 1;
    ncomp = 0;
    int V, E;
    cin >> V >> E;
    vector<Node> Nodes(V);
    vector<int> Components;
    for(int i = 0; i < V; i++) {
      Nodes[i].identifier = i + 'a';
      Nodes[i].isVisited = false;
    }
    
    for(int i = 0; i < E; i++) {
      char a, b;
      cin >> a >> b;
      //cerr << abs(a-97) << " push back1" << endl;
      //cerr << abs(b-97) << " push back2" << endl;
      Nodes[abs(a-97)].adj.push_back(b-97);
      Nodes[abs(b-97)].adj.push_back(a-97);
    }
    
    dfsAll(Nodes, V, Components);
    cout << "Case #" << count << ':' << endl;
    for(int i = 0; i < V; i++) {
      if(!Nodes[i].printed)
        cout << Nodes[i].identifier;
      Nodes[i].printed = true;
      for(int j = 0; j < V; j++) {
        if (Nodes[i].group == Nodes[j].group && i != j && Nodes[j].printed == false) {
          cout << ',' << Nodes[j].identifier << ','<< endl;
          Nodes[j].printed = true;
        }
      }
    }
    cout << endl;
    cout << ncomp << " connected components" << endl;
    cout << endl;
    cout << endl;
    
  }
  
  return 0;
}

