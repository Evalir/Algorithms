#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <string>
#include <set>
#include <map>
using namespace std;

struct Node {
	vector<int> adj;
	bool isVisited = false;
	int identifier;
	int nb;
};
bool isCyclic = 1;
int nofv = 0;
int nofe = 0;
int ans = 0;
void dfs(Node& Current, vector<Node>& Nodes) {
	Current.isVisited = true;
	nofe += Current.adj.size();
	nofv++;
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
			nofv = 0;
			nofe = 0;
			cerr << "going to component n " << i << endl;
			dfs(Nodes[i], Nodes);
		}
		if (nofe == nofv*2)
			ans++;
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
	
	dfsAll(V, 0);
	cout << ans << endl;
	return 0;
}
