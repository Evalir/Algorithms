#include <bits/stdc++.h>
using namespace std;

struct Node {
	vector<int> adj;
	bool isVisited;
	int deg;
};
bool ok = true;
void dfs(Node& Current, vector<Node>& Nodes) {
	Current.isVisited = true;
	if (Current.adj.size() != 2)
		ok = false;
	for(auto id : Current.adj) {
		Node& v = Nodes[id];
		if (!v.isVisited) { 
			dfs(v,Nodes);
		}
	}
}

int main() {
	int n, m;
	cin >> n >> m;
	vector<Node> V(n);
	for(int i = 0; i < m; i++) {
		int x,y;
		cin >> x >> y;
		--x,--y;
		++V[x].deg, ++V[y].deg;
		V[x].adj.push_back(y);
		V[y].adj.push_back(x);
	}
	int ans = 0;
	for(int i = 0; i < n; i++) {
		ok = true;
		bool it = false;
		if (!V[i].isVisited) {
			it = true;
			dfs(V[i], V);
		}
		if (ok && it)
			ans++;
	}
	cout << ans << endl;
	return 0;
}