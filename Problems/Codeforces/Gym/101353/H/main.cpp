#include <bits/stdc++.h>
using namespace std;
using Long = long long;
struct Edge {
    int to, cost;
};
int sz[100010], lvl[100010];
vector<vector<Edge>> G(100010);
const int MOD = 1000000007;
void dfs(int u, int p, int d = 0) {
    lvl[u] = d;
    sz[u] = 1;
    for(auto e : G[u]) {
        if (e.to != p) {
            dfs(e.to, u, d + 1);
            sz[u] += sz[e.to];
        }
    }
}
Long ans = 0;
void dfsMark(int u, int p, int aSum) {
    int naSum = aSum + sz[u];
    for(auto e : G[u]) {
        if (e.to != p) {
            dfsMark(e.to, u, naSum);
            ans += sz[e.to] * e.cost * (sz[u]-sz[e.to]);
            ans %= MOD;
            if (ans < 0) ans += MOD;
        }
    }
}

queue<int> Q:
void bfs(int src) {
    Q.push(src);
    for(int i = 0; i < N; i++) D[i] = INF;
    D[src] = 0;
    while(!Q.empty()) {
        int u = Q.top(); Q.pop();
        for(int v : adj[u]) {
            if (D[v] != INF) {
                D[v] = D[u] + 1;
                Q.push(v);
            }
        }
    }
}
int main() {
    int T;
    scanf("%d", &T);
    int cas = 0;
    while(T-->0) {
        ans = 0;
        cas++;
        int n;
        scanf("%d", &n);
        memset(sz,0,sizeof(sz));
        memset(lvl,0,sizeof(lvl));
        G = vector<vector<Edge>> (10010);
        for(int i = 0; i < n - 1; i++) {
            int u, v, w;
            scanf("%d%d%d", &u, &v, &w);
            u--,v--;
            G[u].push_back({v,w});
            G[v].push_back({u,w});
        }
        dfs(0,-1);
        dfsMark(0,-1,0);
        //ans /= 2;
        printf("Case %d: %d\n", cas, (int)(ans % MOD));
    }
    return 0;
}