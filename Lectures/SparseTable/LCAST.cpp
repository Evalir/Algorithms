#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> adj;
//Code tested properly
using VI = vector<int>;
using VVI = vector<VI>;
using Long = long long;

struct LCA {
private:
    vector<int> st;
    vector<int> et;
    void dfs(vector<vector<int>> &adj, int u) {
        st[u] = et.size();
        et.push_back(u);
        for(auto v : adj[u]) {
            if (lvl[v] >= 0) continue;
            lvl[v] = lvl[u] + 1;
            dfs(adj,v);
            et.push_back(u);
        }
    } // ok
    
    vector<int> anc;
    vector<vector<int>> ST;
    void precompute() {
        int N = et.size();
        if (N == 0) return;
        int logSize = 1 + sizeof(int)*8-1-__builtin_clz((N));
        ST = vector<vector<int>>(logSize, vector<int>(N, - 1));
        
        for(int i = 0; i < N; i++) ST[0][i] = i;
        for(int j = 1; (1 << j) <= N; j++)
            for(int i = 0; i + (1 << j) - 1 < N; i++) {
                if (anc[ST[j - 1][i]] <= anc[ST[j - 1][i + (1 << (j - 1))]])
                    ST[j][i] = ST[j - 1][i];
                else
                    ST[j][i] = ST[j - 1][i + (1 << (j - 1))];

            }
    }
public:
    vector<int> lvl;
    LCA(vector<vector<int>> adj, int root = 0) {
        const int N = adj.size();
        st = vector<int>(N);
        lvl = vector<int>(N, - 1);
        lvl[0] = 0;
        dfs(adj, root);
        anc = vector<int>(et.size());
        for(int i = 0; i < (int)anc.size(); i++) anc[i] = lvl[et[i]];
        precompute();
    } //ok
    
    int query(int u, int v) {
        int a = st[u];
        int b = st[v];
        if (a > b) swap(a,b);
        int k = sizeof(int)*8-1-__builtin_clz((b-a+1));
        int p;
        if (anc[ST[k][a]] <= anc[ST[k][b - (1 << k) + 1]]) p = ST[k][a];
        else p = ST[k][b - (1 << k) + 1];
        return et[p];
    } // ok
};

//better implementation by board

Long D[100010]; // this distance is optional
struct BinaryLifting {
    VVI adj, T;
    VI L;
    int N;
    BinaryLifting(int N) : N(N), adj(N), T(20, VI(N, -1)), L(N) { }
    void addEdge(int u, int v) {
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    void build(int root = 0) {
        dfs(root);
        for (int i = 1; i < 20; ++i)
            for (int j = 0; j < N; ++j)
                if (T[i-1][j] != -1)
                    T[i][j] = T[i-1][ T[i-1][j] ];
    }
    void dfs(int u, int p = -1, int lvl = 0, Long v = 0) {
        T[0][u] = p; L[u] = lvl;
        D[u] += v; // add distance from root to have sum([v, root])
        for (int v : adj[u]) if (v != p) dfs(v, u, lvl+1, D[u]);
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
    Long cost(int u, int p) { // from [u, p)
        return D[u] - (p == -1 ? 0 : D[p]);
    }
};

int main() {
    int T;
    scanf("%d", &T);
    int cas = 0;
    while(T--) {
        cas++;
        int n;
        scanf("%d", &n);
        adj = vector<vector<int>>(n);
        for(int i = 0; i < n; i++) {
            int sz;
            scanf("%d", &sz);
            for(int j = 0; j < sz; j++) {
                int u;
                scanf("%d", &u);
                adj[i].push_back(u - 1);
            }
        }
        int q;
        scanf("%d", &q);
        LCA lca(adj,0);
        printf("Case %d:\n", cas);
        while(q--) {
            int u, v;
            scanf("%d%d", &u, &v);
            u--,v--;
            printf("%d\n", lca.query(u,v) + 1);
        }
    }
    return 0;
}

