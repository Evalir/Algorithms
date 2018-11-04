#include <bits/stdc++.h>
using namespace std;
using Long = long long;
vector<vector<int>> G(100010);
int D[100010];
int dist[100010];
int P[100010];
int ep1 = -1, ep1lvl = -1,ep2 = -1, ep2lvl = -1;
void dfs(int u, int p, int lvl) {
    if (lvl > ep1lvl) {
        //cout << "best is now " << u << endl;
        ep1lvl = lvl;
        ep1 = u;
    }
    for(auto v : G[u]) {
        if (v != p) dfs(v,u,lvl + 1);
    }
}
void dfs1(int u, int p, int lvl) {
    P[u] = p;
    if (lvl > ep2lvl) {
        ep2lvl = lvl;
        ep2 = u;
    }
    for(auto v : G[u]) {
        if (v != p) dfs1(v,u,lvl + 1);
    }
}
int md;
vector<int> path;
void getMid(int u) {
    while(P[u] != -1) {
        path.push_back(u);
        u = P[u];
    }
    path.push_back(u);
    reverse(path.begin(),path.end());
}
bool ok = true;
int n, k;
int main() {
    cin >> n >> k;
    memset(D,0,sizeof(D));
    for(int i = 0; i < 100000; i++) P[i] = -1, dist[i] = 1 << 30;
    int first = 0;
    for(int i = 0; i < n - 1; i++) {
        int u, v;
        cin >> u >> v;
        u--,v--;
        if (!i) first = u;
        G[u].push_back(v);
        G[v].push_back(u);
        D[u]++,D[v]++;
    }
    dfs(first,-1,1);
    dfs1(ep1,-1,1);
    if (ep2lvl <= k) {
        puts("No");
        return 0;
    }
    getMid(ep2);
    md = path[k];
    queue<int> Q;
    Q.push(md);
    dist[md] = 0;
    while(!Q.empty()) {
        int u = Q.front(); Q.pop();
        if (u == md) {
            if (D[u] < 3) ok = false;
        } else {
            if (dist[u] != k && (D[u] - 1) < 3) ok = false;
            if (dist[u] == k && D[u] > 1) ok = false;
        }
        for(int v : G[u]) {
            if (dist[v] == 1 << 30) {
                dist[v] = dist[u] + 1;
                Q.push(v);
            }
        }
    }
    (ok) ? puts("Yes") : puts("No");
    return 0;
}