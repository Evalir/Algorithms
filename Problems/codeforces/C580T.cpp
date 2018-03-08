#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

struct Node {
	vector<int> adj;
	bool hasCats;
	bool isVisited;
    int identifier;
};
int N, M, nodesWithCats = 0;
int canGo = 0;
/// @param current: node that we are entering. Is passed as reference so that changes to isVisited are done in the real nodes
/// @param nodesWithCats: is the number of consecutive ancestor nodes that has cats.
/// @param nodes: list of all nodes with the graph info
void dfs(Node& current, const int nodesWithCats, vector<Node> &nodes) {
	bool isChild = true;
	current.isVisited = true;
    int currNodesWithCats = current.hasCats ? nodesWithCats + 1 : 0;
    //cout << "Node " << current.identifier << ' ' << currNodesWithCats << endl;
    
    if (nodesWithCats > M) return;
    else {
	    for (int id : current.adj ) {
		    Node &v = nodes[id];
		    if (!v.isVisited) {
			    isChild = false; // since it called another node it means it is not a child
			    // do recursion
                dfs(v, currNodesWithCats, nodes);
		    }
	    }
	    if (isChild) {
		    // i am a child do any logic
            if (currNodesWithCats <= M)canGo++;
	    }
    }
}

int main() {
	
	cin >> N >> M;
	vector<Node> V(N);
    for (int i = 0; i < N; i++) {
        int x;
        cin >> x;
        V[i].hasCats = x;
    }
    for(int i = 0; i < N-1; i++) {
        int x,y;
        cin >> x >> y;
        --x, --y;
        V[x].adj.push_back(y);
        V[x].identifier = x+1;
        V[y].adj.push_back(x);
        V[y].identifier = y+1;
    }
	for (Node &n : V) {
		n.isVisited = false;
	}

    dfs(V[0],nodesWithCats, V);
    cout << canGo << endl;

	return 0;
}
