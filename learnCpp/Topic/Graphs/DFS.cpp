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
    //we can add more properties to the graph by adding them to this struct, such as cost or color, etc
};
/// @param current: node that we are entering. Is passed as reference so 
/// that changes to isVisited are done in the real nodes
/// @param nodes: list of all nodes with the graph info
// any other parameters can be passed onto the graph
//OPTIONAL PARAMETERS:
// isRoot -> true on first call, then pass on false on subcalls.
// dfs(Node& current, vector<Node> &nodes, isRoot = true), then change to false on for loop/
//PD: DO NOT alter parameters passed, create variables and pass them on the subcall.
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
		// this will run if all nodes are visited, and if all nodes are vis and is not root, then is leaf
        //if not needed then delete
	}
}

//if we are not dealing with a tree, we'll need this helper function for doing a general DFS.
void dfsAll(vector<Node> &nodes) {
    for(long long i = 0; i < N; i++) {
        //cout << "To node: " << nodes[i].identifier << endl;
        dfs(nodes[i], nodes);
    }
}

int main() {
	
	cin >> N;
	vector<Node> V(N); //creates all the nodes; set properties as needed.
	for (Node &n : V) {
		n.isVisited = false;
	}
	return 0;
}