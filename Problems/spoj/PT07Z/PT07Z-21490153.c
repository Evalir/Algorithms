#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Node {
	vector<int> adj;
	bool isVisited;
	int id;
};
int dis[100000];
void depth(Node& Current, vector<Node>& Nodes, int Depth) {
	Current.isVisited = true;
	dis[Current.id] = Depth;
	for(int id : Current.adj) {
		Node& v = Nodes[id];
		if (!v.isVisited) {
			//cerr << "Going to " << v.id << " from " << Current.id << endl;
			depth(v, Nodes, Depth+1);
		}
	}
}
int maxpath = -1;
void maxdist(Node& Current, vector<Node>& Nodes, int Depth) {
	Current.isVisited = true;
	maxpath = max(maxpath, Depth);
	for(int id : Current.adj) {
		Node& v = Nodes[id];
		if (!v.isVisited) {
			//cerr << "Going to " << v.id << " from " << Current.id << endl;
			maxdist(v, Nodes, Depth+1);
		}
	}	
}

int main() {
	int N;
	cin >> N;
	vector<Node> V(N);
	
	for(int i = 0; i < N-1; i++) {
		int x, y;
		cin >> x >> y;
		x--;
		y--;
		V[x].adj.push_back(y);
		V[y].adj.push_back(x);
		V[x].id = x;
		V[y].id = y;
	}
	//fill dis array
	depth(V[0], V, 0);

	for(int i = 0; i < N; i++)
		V[i].isVisited = false;

	//find maxdis
	int maxdis = 0;
	for(int i = 0; i < N; i++) {
		maxdis = max(maxdis, dis[i]);
	}

	//get idx
	int idx = 0;
	for(int i = 0; i < N; i++) {
		if (dis[i] == maxdis) {
			idx = i;
			break;
		}
	}

	maxdist(V[idx], V, 0);

	cout << maxpath << endl;
	
	return 0;
}