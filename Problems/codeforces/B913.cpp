#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
#include <climits>
using namespace std;

struct Node {
	vector<int> adj;
	int identifier;
	bool isVisited;
	bool isLeaf;
	int nOfLeaves;
};

void dfs(Node& Current, vector<Node> &Nodes, int Parent) { 
	Current.isLeaf = true;
	Current.isVisited = true;
	for (int id : Current.adj ) {
		Node &v = Nodes[id];
		if (!v.isVisited) {
			Current.isLeaf = false;
			//cerr << current.identifier << " is not a child" << endl;
            dfs(v, Nodes, Current.identifier);
		}
	}
	if (Current.isLeaf) {
		//if is leaf, get parent node and increment number of leaves
		Current.isLeaf = true;
		Nodes[Parent].nOfLeaves++;
	}
}

int main() {
	int N;
	cin >> N;
	vector<Node> V(N); //creates all the nodes; set properties as needed.
	//set all nodes as unvisited
	for (Node &n : V) {
		n.isVisited = false;
	}

	for(int i = 0; i < N-1; i++) {
		int x;
		cin >> x;
		x--;
		V[x].adj.push_back(i+1);
		V[x].identifier = x;
		V[i+1].identifier = i+1;
	}

	dfs(V[0], V, 0);

	for(Node N : V) {
		//cerr << "Checking node " << N.identifier << endl;
		if (N.isLeaf == false && N.nOfLeaves < 3) {
			cout << "No" << endl;
			return 0;
		}
		else continue;
	}

	cout << "Yes" << endl;
	return 0;

	return 0;
}