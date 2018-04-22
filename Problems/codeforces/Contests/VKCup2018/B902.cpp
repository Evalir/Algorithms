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
	bool isLeaf;
};

void dfs(Node& Current, vector<Node> &Nodes) { 
	Current.isLeaf = true;
	Current.isVisited = true;
	for (int id : Current.adj ) {
		Node &v = Nodes[id];
		if (!v.isVisited) {
			Current.isLeaf = false; // since it called another node it means it is not a child
            //do recursion
		}
	}
	if (Current.isLeaf) {

	}
}

//if we are not dealing with a tree, we'll need this helper function for doing a general DFS.
void dfsAll(vector<Node> &nodes, int N) {
    for(long long i = 0; i < N; i++) {
        //cout << "To node: " << nodes[i].identifier << endl;
        dfs(nodes[i], nodes);
    }
}

int main() {
	int N;
	cin >> N;
	vector<Node> V(N); //creates all the nodes; set properties as needed.
	for (Node &n : V) {
		n.isVisited = false;
	}

	for(int i = 0; i < N-1; i++) {
		int x;
		cin >> x;
		x--;
		V[x].adj.push_back(i+1);
		V[x].identifier = x+1;
		V[i].adj.push_back(x);
		V[i].identifier = i+2;
	}

	for(auto node : V) {
		cout << node.identifier << " rn" << endl;
		for(auto at : node.adj) {
			cout << "Node " << node.identifier << " child " << at << endl;
		}
	}


	return 0;
}