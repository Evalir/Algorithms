#include <bits/stdc++.h>
using namespace std;
int d[110], vis[110];
vector<int> g[110];

void dfs(int u) {
    vis[u] = true;
    for(auto v : g[u]) {
        if (!vis[v]) {
            d[v]--;
            dfs(v);
        }
    }
}
int main() {
    int n, m;
    cin >> n >> m;
    memset(d,0,sizeof(d));
    memset(vis,0,sizeof(vis));
    for(int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
        u--,v--;
        d[u]++, d[v]++;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    int ans = 0;
    bool done = false;
    queue<int> Q;
    while(true) {
        for(int i = 0; i < n; i++) if (!vis[i] && d[i] == 1) Q.push(i);
        if (Q.empty()) break;
        ans++;
        while(!Q.empty()) {
            int u = Q.front(); Q.pop();
            vis[u] = true;
            for(auto v : g[u]) {
                if (!vis[v]) d[v]--;
            }
        }

    }
    cout << ans << endl;
    return 0;
}