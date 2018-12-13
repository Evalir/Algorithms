#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <cstdio>
using namespace std;
using Long = long long;
using pii = pair<int,int>;

struct Edge {
    int to, cost;
};

vector<vector<int>> mx(30, vector<int>(100010,-(1<<30))),
        mn(30, vector<int>(100010, (1<<30)));

struct BinaryLifting {
    vector<vector<Edge>> adj;
    vector<vector<int>> T;
    vector<int> L;
    int N;
    BinaryLifting(int N) : N(N), adj(N), T(20, vector<int>(N, -1)), L(N) { }
    void addEdge(int u, int v, int w) {
        adj[u].push_back({v,w});
        adj[v].push_back({u,w});
    }
    void build(int root = 0) {
        dfs(root,-1,0,0);
        for (int i = 1; i < 20; ++i)
            for (int j = 0; j < N; ++j)
                if (T[i-1][j] != -1) {
                    T[i][j] = T[i - 1][T[i - 1][j]];
                    mx[i][j] = max(mx[i - 1][j], mx[i - 1][T[i - 1][j]]);
                    mn[i][j] = min(mn[i - 1][j], mn[i - 1][T[i - 1][j]]);
                }
    }
    void dfs(int u, int p = -1, int lvl = 0, Long dist = 0) {
        T[0][u] = p; L[u] = lvl;
        mx[0][u] = dist;
        mn[0][u] = dist;
        for (auto v : adj[u]) if (v.to != p) dfs(v.to, u, lvl+1, v.cost);
    }
    int lca(int u, int v) {
        if (L[u] < L[v]) swap(u, v);
        for (int i = 19; i >= 0; --i)
            if (L[u] - (1<<i) >= L[v])
                u = T[i][u];
        if (u == v) return u;
        for (int i = 19; i >= 0; --i)
            if (T[i][u] != T[i][v])
                u = T[i][u], v = T[i][v];
        return T[0][u];
    }
    pii query(int u, int v) {
        int minn = (1 << 30), maxx = -(1 << 30);
        if (L[u] < L[v]) swap(u, v);
        for (int i = 19; i >= 0; --i)
            if (L[u] - (1<<i) >= L[v]) {
                minn = min(minn, mn[i][u]);
                maxx = max(maxx, mx[i][u]);
                u = T[i][u];
            }
        if (u == v) return {minn,maxx};
        for (int i = 19; i >= 0; --i)
            if (T[i][u] != T[i][v]) {
                minn = min(minn, min(mn[i][u], mn[i][v]));
                maxx = max(maxx, max(mx[i][u], mx[i][v]));
                u = T[i][u], v = T[i][v];
            }
        minn = min(minn, min(mn[0][u], mn[0][v]));
        maxx = max(maxx, max(mx[0][u], mx[0][v]));
        return {minn,maxx};
    }
};
int main() {
    int n;
    cin >> n;
    BinaryLifting LCA(n);
    for(int i = 0; i < n - 1; i++) {
        int u, v, w;
        cin >> u >> v >> w;
        u--,v--;
        LCA.addEdge(u,v,w);
    }
    LCA.build();
    int q;
    cin >> q;
    while(q--) {
        int u,v;
        cin >> u >> v;
        u--,--v;
        cout << LCA.query(u,v).first << " " << LCA.query(u,v).second << endl;
    }
    return 0;
}

