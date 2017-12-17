#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include <cmath>
using namespace std;

//Graph implementation as adjacency list for DFS traversal.
void addEdge(vector<int> adj[], int ind, int edge) {
    adj[ind].push_back(edge);
    adj[edge].push_back(ind);
}
//Do dfs recursively from given vertex u
void DFSUtil(vector <int> adj[], vector<bool> visited, int u) {
    visited[u] = true;
    cout << u << " ";
    for(int i = 0; i < adj[u].size(); i++) {
        if (visited[adj[u][i]] == false) 
            DFSUtil(adj, visited, adj[u][i]);
    }
}

//Do general DFS
void DFS(vector<int> adj[], int V) {
    vector<bool> visited(V, false);
    for(int u = 0; u < V; u++) {
        if (visited[u] == false)
            DFSUtil(adj, visited, u);
    }
}

int main() {
    int V = 6;
    vector<int> adj[V];
    addEdge(adj, 0, 1);
    addEdge(adj, 0, 2);
    addEdge(adj, 0, 3);
    addEdge(adj, 3, 5);
    addEdge(adj, 2, 7);
    addEdge(adj, 1, 6);
    DFS(adj, V);
    return 0;
}