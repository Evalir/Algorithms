#include <iostream>
#include <vector>
#include <cstdio>
#include <algorithm>
using namespace std;

double totalDepth = 0;
double nLeaves = 0;

struct Node {
	vector<int> adj;
	bool isVisited;
	int identifier;
    bool isLeaf = true;
};

void dfs(Node& Current, vector<Node>& Nodes, int Depth) {
	Current.isVisited = true;
	
	for(int id : Current.adj) {
		Node& v = Nodes[id];
		if (!v.isVisited) {
            Current.isLeaf = false;
			//cerr << "Going to " << v.identifier << " from " << Current.identifier << endl;
			dfs(v, Nodes, Depth+1);
		}
	}
    
    if (Current.isLeaf) {
        //cerr << "Arrived at leaf " << Current.identifier << endl;
        totalDepth += Depth;
        nLeaves++;
    }
    
    
}

void dfsAll(vector<Node>& Nodes, int N) {
	for(int i = 0; i < N; i++) {
		if (!Nodes[i].isVisited) {
			dfs(Nodes[i], Nodes, 0);
		}
	}
}
  
int main() {
    int N;
    cin >> N;
    vector<Node> V(N);

	for(int i = 0; i < N-1; i++) {
		int x, y;
		cin >> x >> y;
		x--;
		y--;
		V[x].adj.push_back(y);
		V[y].adj.push_back(x);
		V[x].identifier = x+1;
		V[y].identifier = y+1;
	}
    
    dfs(V[0], V, 0);
    
    printf("%.16f", totalDepth/nLeaves);
    
}
