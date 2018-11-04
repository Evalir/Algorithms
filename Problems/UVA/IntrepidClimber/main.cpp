#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <cassert>
#include <cstring>
#include <string>
#include <map>
#include <queue>
#include <set>
using namespace std;
using Long = long long;
using pii = pair<Long,Long>;
using VI = vector<int>;
using VVI = vector<VI>;
int n, f;
struct Edge {
    Long to, cost;
    bool operator<(const Edge &o) const {
        if (cost != o.cost) return cost < o.cost;
        return to < o.to;
    }
};

vector<vector<Edge>> adj;
bool lm[100010];
Long ans = 0;
Long DP[100010];
int bl[100010];
vector<pii> paths;

Long D[100010]; // this distance is optional
struct BinaryLifting {
    VVI T;
    VI L;
    int N;
    BinaryLifting(int N) : N(N), T(20, VI(N, -1)), L(N) { }
    void build(int root = 0) {
        dfs(root);
        for (int i = 1; i < 20; ++i)
            for (int j = 0; j < N; ++j)
                if (T[i-1][j] != -1)
                    T[i][j] = T[i-1][ T[i-1][j] ];
    }
    void dfs(int u, int p = -1, int lvl = 0, Long v = 0) {
        T[0][u] = p; L[u] = lvl;
        for (auto v : adj[u]) if (v.to != p) dfs(v.to, u, lvl+1, D[u]);
    }
    int lca(int u, int v) {
        u--,v--;
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
    Long cost(int u, int p) { // from [u, p)
        return D[u] - (p == -1 ? 0 : D[p]);
    }
};

int pnode = 1;
void dp(int u, int p, Long dist) {
    DP[u] = dist;
    if (lm[u]) paths.push_back({dist,u}), bl[u] = 1;
    for(auto e : adj[u]) {
        if (e.to != p) {
            dp(e.to, u, dist + e.cost);
            bl[u] += bl[e.to];
        }
    }
}

void dfs(int u, int p, BinaryLifting &Lca) {
    if (lm[u] && bl[u] == 1) {
        ans += DP[u];
        ans -= DP[Lca.lca(pnode, u + 1)];
        pnode = u + 1;
    }
    for(auto e : adj[u]) {
        if (e.to != p)
            dfs(e.to, u, Lca);
    }
}

int main() {
    while(scanf("%d%d", &n, &f) == 2) {
        pnode = 1;
        memset(lm, 0, sizeof(lm));
        memset(DP, 0, sizeof(DP));
        memset(bl, 0, sizeof(bl));
        paths.clear();
        for(int i = 0; i < n - 1; i++) {
            int u, v, w;
            scanf("%d%d%d", &u, &v, &w);
            u--, v--;
            adj[u].push_back({v, w});
            adj[v].push_back({u, w});
        }
        for(int i = 0; i < f; i++) {
            int x;
            scanf("%d", &x);
            x--;
            lm[x] = true;
        }
        dp(0, -1, 0);
        sort(paths.rbegin(), paths.rend());
        BinaryLifting Lca(n);
        Lca.build(0);
        dfs(0, -1, Lca);
        ans -= DP[paths[0].second];
        printf("%lld\n", ans);
    }
    return 0;
}