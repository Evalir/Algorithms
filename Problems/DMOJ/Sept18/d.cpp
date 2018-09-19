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
	vector<int> k;
	int anw = 0;
	for(int i = 0; i < cnt; i++) {
		if (ans[i].size() > 1) {
			for(auto &z : ans[i])
				k.push_back(z+1);
		}
	}
	cout << 2 << endl;
	cout << k.size() << ' ';
	for(auto i : k) cout << i << ' ';
	cout << endl;
	k.clear();
	for(int i = 0; i < cnt; i++) {
		if (ans[i].size() > 1) {
			k.push_back(ans[i].back());
		}
	}
	cout << k.size() << ' ';
	for(auto i : k) cout << i << ' ';
	puts("");
	
    return 0;
}
