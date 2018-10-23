#include <bits/stdc++.h>
using namespace std;
bool vis[100010];
vector<vector<int>> adj(100010);
int val[100010], dp[100010];
int ans = (int)1e9;

void dfs(int u, int oans) {
    vis[u] = true;
    int md = 0;
    for(int v : adj[u]) {
        if (!vis[v]) {
            dfs(v, max(oans, val[u]));
            md = max(md, dp[v]);
        }
    }
    dp[u] = max(md,val[u]);
    if (oans <= val[u] && val[u] >= dp[u]) ans = min(ans, val[u]);
}

int main() {
    int n;
    scanf("%d", &n);
    memset(dp,0,sizeof(dp));
    for(int i = 0; i < n; i++) scanf("%d", &val[i]);
    for(int i = 0; i < n - 1; i++) {
        int u, v;
        scanf("%d%d", &u,&v);
        u--,v--;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    dfs(0,val[0]);
    cout << ans << endl;
    return 0;
}