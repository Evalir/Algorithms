<<<<<<< HEAD
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
=======
#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
#include <climits>
using namespace std;

int N;
int colorSteps = 0;
struct Node {
	vector<int> adj;
	int identifier = 0;
	bool isVisited;
	int color;
};

void dfs(Node& Current, vector<Node>& Nodes, Node& Parent) {
	Current.isVisited = true;
	if (Parent.color != Current.color)
		colorSteps++;
		
	for (int id : Current.adj ) {
		Node &v = Nodes[id];
		if (!v.isVisited) {
            dfs(v, Nodes, Current);
		}
	}
}

int main() {
	cin >> N;
	vector<Node> V(N); //creates all the nodes; set properties as needed.
	int colors[N];

	for(int i = 0; i < N-1; i++) {
		int v;
		cin >> v;
		v--;
		V[v].adj.push_back(i+1);
		//cerr << v << " with " << i+1 << endl;
		//V[v].identifier = v;

	}

	for(int i = 0; i < N; i++) {
		cin >> colors[i];
	}

	for (int i = 0; i < N; i++) {
		V[i].isVisited = false;
		V[i].color = colors[i];
	}

	dfs(V[0], V, V[0]);
	
	cout << colorSteps+1 << endl;


	return 0;
}
>>>>>>> a9e5f3cdde2c367b2f8599e274bd2e4f07067dfa
