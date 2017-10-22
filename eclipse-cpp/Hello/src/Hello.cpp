#include <iostream>

#include <vector>

using namespace std;

// adjacency list
typedef vector<int> VI;
typedef vector<VI> VVI;

VVI adj;
VI vis;
int dfs(int u) {
    int res = 1;
    vis[u] = 1;
    for (int v : adj[u]) {
        if (vis[v]) continue;
        res += dfs(v);
    }
    return res;
}

int main() {
    int N, M;
    cin >> N >> M;
    adj = VVI(N);
    for (int j = 0; j < M; ++j) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    int ncomp = 0;
    vis = VI(N, 0);
    for (int u = 0; u < N; ++u) {
        if (!vis[u]) {
            int compsz = dfs(u);
            ncomp++;
            cerr << "Componente #" << ncomp << " tiene " << compsz << " nodos" << endl;
        }
    }
    cerr << ncomp << endl;

    return 0;
}
