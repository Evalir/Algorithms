#include <bits/stdc++.h>
using namespace std;
using pii = pair<int,int>;
using namespace std;

class DisjointSet {
    int N;
    int ncomp;
    vector<int> par;
    vector<int> rank;

public:
    DisjointSet(size_t _N) : N(_N), ncomp(_N), par(_N, -1), rank(_N, 0) {}
    void reset() {
        par.assign(N, -1);
        rank.assign(N, 0);
        ncomp = N;
    }
    int sz() const {
        return ncomp;
    }
    int find(int u) {
        // path compression
        return par[u] < 0 ? u : par[u] = find(par[u]);
    }
    bool join(int u, int v) {
        int u_root = find(u);
        int v_root = find(v);
        if (u_root == v_root)
            return false;
        if (rank[u_root] > rank[v_root])
            par[v_root] = u_root;
        else {
            par[u_root] = v_root;
            if (rank[u_root] == rank[v_root])
                rank[v_root] = rank[u_root] + 1;
        }
        --ncomp;
        return true;
    }
};

int main() {
    int n;
    scanf("%d", &n);
    vector<pii> V(n);
    DisjointSet DS(n);
    for(int i = 0; i < n; i++) {
        scanf("%d%d", &V[i].first, &V[i].second);§
    }
    for(int i = 0; i < n; i++)
        for(int j = i + 1; j < n; j++)
            if (V[i].first == V[j].first || V[i].second == V[j].second)
                DS.join(i, j);
    printf("%d\n", DS.sz() - 1);
    return 0;
}