#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> g(1000);
vector<bool> vis(10000, 0);
vector<vector<int>> ans(10000);
int cnt = 0;
void dfs(int u) {
	vis[u] = true;
	ans[cnt].push_back(u);
	for(auto v: g[u]) {
		if (!vis[v])
			dfs(v);
	}
}

int main() {
    int n;
    cin >> n;
    for(int i = 0; i < n; i++) {
		int x;
		cin >> x;
		x--;
		g[i].push_back(x);
		g[x].push_back(i);
	}
	for(int i = 0; i < n; i++) {
		if (!vis[i]) {
			dfs(i);
			cnt++;
		}
	}
	int anw = 0;
	for(int i = 0; i < cnt; i++) {
		if (ans[i].size() > 1) anw++;
	}
	cout << anw << endl;
	for(int i = 0; i < cnt; i++) {
		if (ans[i].size() > 1) {
		cout << ans[i][ans[i].size()-1]+1 << ' ';
		for(auto v : ans[i])
			cout << v+1 << ' ';
		cout << endl;
		}
	}
	
    return 0;
}
