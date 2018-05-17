#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <string>
#include <set>
#include <map>
#define INF (int)-1e9+7
using namespace std;

struct Node {
	vector<int> adj;
	bool isVisited = false;
	int identifier;
};

int ans = 0;
int ced = 2;
void dfs(Node& Current, vector<Node>& Nodes) {
	Current.isVisited = true;
	int curr = Current.adj.size();
	if (curr != 2)
		ced = curr;
	//cerr << "Current node: " << Current.identifier << " curr: " << curr << " ced: " << ced << endl;
	for(int id : Current.adj) {
		Node& v = Nodes[id];
		if (!v.isVisited) {
			//cerr << "Going to " << v.identifier << " from " << Current.identifier << endl;
			dfs(v, Nodes);
		}
	}
}

void dfsAll(vector<Node>& Nodes, int N) {
	bool it = 0;
	for(int i = 0; i < N; i++) {
		it = 0;
		if (!Nodes[i].isVisited) {
			it = 1;
			ced = 2;
			//cerr << "going to component n " << i << endl;
			dfs(Nodes[i], Nodes);
		}
		if (ced == 2 && it) {
			//cerr << "Boom answer" << endl;
			ans++;
		}
	}
}

int main() {
	int N, M;
	cin >> N >> M;
	vector<Node> V(N);
	
	for(int i = 0; i < M; i++) {
		int x, y;
		cin >> x >> y;
		x--;
		y--;
		V[x].adj.push_back(y);
		V[y].adj.push_back(x);
		V[x].identifier = x+1;
		V[y].identifier = y+1;
	}
	
	dfsAll(V, N);
	cout << ans << endl;
	return 0;
}
