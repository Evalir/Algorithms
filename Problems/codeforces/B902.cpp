#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
#include <climits>
using namespace std;

int N;

struct Node {
	vector<int> adj;
	int identifier;
	bool isVisited;
	int color;
	int nodeDepth;
};

void dfs(Node& Current, vector<Node> &Nodes, int color) {
	Current.isVisited = true;
	Current.color = color;
	for (int id : Current.adj ) {
		Node &v = Nodes[id];
		if (!v.isVisited) {
            dfs(Current, Nodes, color);
		}
	}
}

void calculateNodeDepth(Node& Current, vector<Node> &Nodes, int Depth = 0) {
	Current.isVisited = true;
	Current.nodeDepth = Depth;
	for (int id : Current.adj ) {
		Node &v = Nodes[id];
		if (!v.isVisited) {
            calculateNodeDepth(v, Nodes, Depth+1);
		}
	}
}

int main() {
	cin >> N;
	vector<Node> V(N); //creates all the nodes; set properties as needed.
	int colors[N];
	int steps = 0;

	for(int i = 1; i < N; i++) {
		int v;
		cin >> v;
		v--;
		V[v].adj.push_back(i);
		V[v].identifier = v;
		V[i].adj.push_back(v);
		V[i].identifier = i;
		V[i].color = 0;
		V[v].color = 0;
	}

	for(int i = 0; i < N; i++) {
		cin >> colors[i];
	}

	for (Node &n : V) {
		n.isVisited = false;
	}

	calculateNodeDepth(V[0], V);

	for(Node n : V) {
			cout << "Node: " << n.identifier << " Depth: " << n.nodeDepth << endl;	
	}

	for(int i = 0 ; i < N; i++) {
		if (V[i].color != colors[i]) {
			steps++;
			dfs(V[i], V, colors[i]);
		}
	}



	return 0;
}