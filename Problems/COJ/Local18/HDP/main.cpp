#include <bits/stdc++.h>
using namespace std;
vector<int> adj[100010], D(100010), G(100010), F(100010);
bool vis[100010], RN[100010];
const int INF = 1 << 30;
int ans = 0;
void getDepth(int u) {
    vis[u] = true;
    D[u] = 1;
    for(int v : adj[u]) {
        if (!vis[v]) {
            getDepth(v);
            D[u] = max(D[u], D[v] + 1);
        }
    }
}

void joinPaths(int u, int p) {
    vis[u] = true;
    vector<int> CC;
    for(int v : adj[u]) {
        if (!vis[v]) {
            joinPaths(v,u);
            CC.push_back(D[v]);
        }
    }
    sort(CC.begin(), CC.end());
    if (CC.size() >= 2) {
        G[u] = 1 + CC[CC.size()-1] + CC[CC.size()-2];
    }
    ans = max(ans, max(G[u],D[u]));
}

int main() {
    memset(vis, 0, sizeof(vis));
    int N,R;
    scanf("%d%d", &N, &R);
    while(R--) {
        int a;
        scanf("%d", &a);
        a--;
        RN[a] = true;
    }
    for(int i = 0; i < N-1; i++) {
        int x,y;
        scanf("%d%d", &x,&y);
        x--,y--;
        if (RN[x] && RN[y]) {
            adj[x].push_back(y);
            adj[y].push_back(x);
        }

    }
    for(int i = 0; i < N; i++) {
        if (!RN[i]) continue;
        if (vis[i]) continue;
        getDepth(i);
        memset(vis,0,sizeof(vis));
        joinPaths(i,i);
    }

    printf("%d\n", ans);

    return 0;
}