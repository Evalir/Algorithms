#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Node {
	bool isVisited = false;
	vector<int> adj;
	int id;
	bool isLeaf = true;
};

void dfs(Node& Current, vector<Node>& Nodes, int Parent) {
	Current.isVisited = true;
	Current.isLeaf = true;
	//chequear todos los vecinos
	for(int id : Current.adj) {
		Node &v = Nodes[id];
		if (!v.isVisited) {
			dfs(v, Nodes, Current.id);
		}
	}

	if (Current.isLeaf) {
		//do stuff
	}

	return;
}

void dfsAll(vector<Node>& Nodes, int& N) {
	for(int i = 0; i < N; i++) {
		if (!Nodes[i].isVisited) {
			dfs(Nodes[i], Nodes, -1);
		}
	}
}

int main() {
	int N;
	cin >> N;
	vector<Node> Nodes(N);

	for(int i = 0; i < N-1; i++) {
		int x, y;
		cin >> x >> y;
		x--, y--;
		//si es directed, solo dejar Nodes[x]
		Nodes[x].adj.push_back(y);
		Nodes[x].id = x+1; // poner id en 1-based indexing
		Nodes[y].adj.push_back(x);
		Nodes[y].id = y+1;
	}

	dfsAll(Nodes, N);

}

