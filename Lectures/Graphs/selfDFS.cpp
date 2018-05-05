#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Node {
	vector<int> adj;
	bool isVisited;
	int identifier;
};


void dfs(Node& Current, vector<Node>& Nodes) {
	Current.isVisited = true;
	
	for(int id : Current.adj) {
		Node& v = Nodes[id];
		if (!v.isVisited) {
			cerr << "Going to " << v.identifier << " from " << Current.identifier << endl;
			dfs(v, Nodes);
		}
	}
}

void dfsAll(vector<Node>& Nodes, int N) {
	for(int i = 0; i < N; i++) {
		if (!Nodes[i].isVisited) {
			dfs(Nodes[i], Nodes);
		}
	}
}

struct MatNode {
	bool isVisited;
	char content;
};

//Goes all directions, ever diagonally
void floodFill(int r, int c, vector< vector<MatNode> >& Matrix) {
	if (r < 0 || c < 0 || r >= N || r >= M)
		return;
	
	if (Matrix[r][c].isVisited)
		return;
	Matrix[r][c].isVisited = true;

	if (Matrix[r][c].content != '@') //where @ is target cell.
		return;
	
	floodFill(r+1, c, Matrix);
	floodFill(r-1, c, Matrix);
	floodFill(r, c+1, Matrix);
	floodFill(r, c-1, Matrix);
	floodFill(r+1, c+1, Matrix);
	floodFill(r-1, c+1, Matrix);
	floodFill(r+1, c-1, Matrix);
	floodFIll(r-1, c-1, Matrix);
}

int main() {
	int N;
	cin >> N;
	vector<Node> V(N);
	
	for(int i = 0; i < N; i++) {
		int x, y;
		cin >> x >> y;
		x--;
		y--;
		V[x].adj.push_back(y);
		V[y].adj.push_back(x);
		V[x].identifier = x+1;
		V[y].identifier = y+1;
	}
	
	dfs(V[0], V);
	
	return 0;
}
