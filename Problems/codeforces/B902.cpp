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
};

void dfs(Node& Current, vector<Node> &Nodes, int color) {
	Current.isVisited = true;
	for (int id : Current.adj ) {
		Node &v = Nodes[id];
		if (!v.isVisited) {
            dfs(Current, Nodes, color);
		}
	}
}

int main() {
	cin >> N;
	vector<Node> V(N); //creates all the nodes; set properties as needed.
	int colors[N];
	int steps = 0;

	for(int i = 0; i < N-1; i++) {
		int v;
		cin >> v;
		v--;
		V[v].adj.push_back(i+1);
		V[v].identifier = v;
		V[i].adj.push_back(v);
		V[i].identifier = i+1;
	}

	for(int i = 0; i < N; i++) {
		cin >> colors[i];
	}

	for (Node &n : V) {
		n.isVisited = false;
	}

	for(Node& n : V) {
			cout << "Node: " << n.identifier << endl;	
			for(int at : n.adj) {
				cout << "child" << at << endl;
			}
	}

	for(int i = 0 ; i < N; i++) {
		if (V[i].color != colors[i]) {
			steps++;
			dfs(V[i], V, colors[i]);
		}
	}



	return 0;
}
