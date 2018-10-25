#include <bits/stdc++.h>
using namespace std;

struct Edge {
	int v, color;
};

vector<vector<Edge>> G(111);
bool vis[110];
bool ok = false;
void dfs(int u, int color, int dst) {
	vis[u] = true;
	if (u == dst) {
		ok = true;
		return;
	}
	for(auto e : G[u]) {
		if (!vis[e.v] && e.color == color) 
			dfs(e.v,color,dst);
	}
}

int main() {
	int n,m;
	cin >> n >> m;
	while(m--) {
		int u, v, w;
		cin >> u >> v >> w;
		u--,v--;
		G[u].push_back({v,w});
		G[v].push_back({u,w});
	}
	int q;
	cin >> q;
	while(q--) {
		int u, v;
		cin >> u >> v;
		u--,v--;
		int ans = 0;
		for(int i = 1; i <= 100; i++) {
			memset(vis,0,sizeof(vis));
			ok = false;
			dfs(u,i,v);
			if (ok) ans++;
		}
		cout << ans << endl;
	}
	return 0;
}
