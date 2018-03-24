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
