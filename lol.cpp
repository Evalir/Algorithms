#include <bits/stdc++.h>
using namespace std;
struct Node {
    vector<int> adj;
    bool isVisited = false;
    int identifier; //added for demonstration
    //Another parameter you may need, like degree or a special property that the problem gives.
};

void dfs(vector<Node>& Nodes, Node& Current) {
    Current.isVisited = true;
    for(auto id : Current.adj) {
        Node& v = Nodes[id];
        if (!v.isVisited) {
            cout << "going from " << Current.identifier << " to " << v.identifier << endl;
            dfs(Nodes,v); 
        }
    }

} 

int main() {
    int n; cin >> n;
    vector<Node> Graph(n);
    int vertices; cin >> vertices;
    for(int i = 0; i < vertices; i++) {
        int a,b;
        cin >> a >> b;
        //--a,--b necessary if the problem is using one based indexing
        Graph[a].adj.push_back(b);
        Graph[b].adj.push_back(a);
        Graph[a].identifier = a;
        Graph[b].identifier = b;
    }
	dfs(Graph,Graph[0]);
}

