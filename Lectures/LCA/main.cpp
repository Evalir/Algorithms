#include <bits/stdc++.h>
using namespace std;
using Long = long long;
using VVI = vector<vector<int>>;
using VI = vector<int>;
//LCA with RMQ
vector<int> Start;
vector<bool> vis;
vector<vector<int>> G;
vector<int> Euler, Depth;

void resetV(int sz) {
    Start.assign(sz, 0);
    vis.assign(sz, 0);
    Euler.clear();
    Depth.assign(sz, 0);
    G.assign(sz, vector<int>());
}
struct LCA {
    const int INF = 1 << 30;
    int time = 0;
    LCA() {}
    void addEdge(int u,int v) {
        G[u-1].push_back(v-1);
        G[v-1].push_back(u-1);
    }
    void dfs(int u, int d = 0) {
        vis[u] = true;
        Depth[u] = d;
        Start[u] = (int)Euler.size();
        Euler.push_back(u);
        for(auto v : G[u]) {
            if (!vis[v]) {
                dfs(v, d + 1);
                Euler.push_back(u);
            }
        }
    }
    struct Node {
        Long val;
        int D;
        Node (Long _v, int _D) {
            val = _v;
            D = _D;
        }
    };
    vector<int> V;
    vector<Node> Tree;
    Node merge (Node p1, Node p2) {
        return p1.D < p2.D ? p1 : p2;
    }
    void create(int id, int st, int en) {
        if (st == en) {
            Tree.at(id).val = V.at(st);
            Tree.at(id).D = Depth[V.at(st)];
            return;
        }
        int le = id*2;
        int ri = le + 1;
        int mid = (st + en) / 2;
        create(le, st, mid);
        create(ri, mid + 1, en);
        Tree.at(id) = merge(Tree.at(le), Tree.at(ri));
    }
    Node query(int id, int st, int en, int lef, int ri) {
        if (st > ri || en < lef) {
            assert(false);
        }
        if (lef <= st && en <= ri) { //totally inside range
            return Tree.at(id);
        }
        int mid = (st + en) / 2;
        if (lef > mid) //go right, range is to the right
            return query(id*2 + 1, mid + 1, en, lef, ri);
        else if (ri <= mid) // go left
            return query(id*2, st, mid, lef, ri);

        Node lQ = query(id*2, st, mid, lef, ri);
        Node rQ = query(id*2 + 1, mid + 1, en, lef, ri);
        return merge(lQ,rQ);
    }
    void init(int root, int n) {
        dfs(root,root);
//        for(auto &i : Euler) cout << i + 1 << " ";
//        cout << endl;
//        for(int t = 0; t < n; t++) {
//            cout << "node -> " << t + 1 << " " << " start time: " << Start[t] << " depth : " << Depth[t] << endl;
//        }
//        cout << endl;
        V = Euler;
        Tree = vector<Node>(4*(int)V.size(), Node(0,0));
        create(1,0,V.size()-1);
    }
    int getQuery(int lef, int ri) {
        return query(1, 0, V.size()-1, lef, ri).val;
    }
    int getLCA(int u, int v) {
        u--,v--;
        int l = Start[u], r = Start[v];
        if (l > r) swap(l,r);
        int lca = getQuery(l,r);
        return lca;
        //return lca;
    }
};

struct BFLCA {
    int N;
    VVI adj;
    VI P, L;
    BFLCA(int N) : N(N), adj(N), P(N, -1), L(N, 0) {}
    void addEdge(int u, int v) {
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    void build() {
        for (int i = 0; i < N; ++i) {
            if (P[i] == -1)
                dfs(i);
        }
    }
    void dfs(int u, int p = -1, int l = 0) {
        P[u] = p; L[u] = l;
        for (int v : adj[u]) if (v != p) dfs(v, u, l + 1);
    }
    int lca(int u, int v) {
        if (L[u] < L[v]) swap(u, v);
        while (L[u] > L[v]) u = P[u];
        while (u != v) u = P[u], v = P[v];
        return u;
    }
};

vector<vector<int>> generate(int sz) {
    vector<vector<int>> adj(sz);
    for(int i = 1; i < sz; i++) {
        int p = (rand() % i);
        adj[i].push_back(p);
        adj[p].push_back(i);
    }
    return adj;
}

int main() {
//    srand(123);
//    for(int i = 0; i < 100000; i++) {
//        cout << "test case " << i << " ok " << endl;
//        int sz = (rand() % 10) + 1;
//        resetV(sz);
////        cout << "?" << endl;
//        G = generate(sz);
////        cout << "??" << endl;
//        if (i == 9) {
//            cout << G.size() << endl;
//            for (int i = 0; i < sz; i++) {
//                cout << G[i].size();
//                for (auto u : G[i]) {
//                    cout << " " << u + 1;
//                }
//                cout << endl;
//            }
//        }
//        LCA lca;
//        lca.init(0,sz);
//        for(int j = 0; j < 100; j++) {
//            int u = (rand() % sz) + 1;
//            int v = (rand() % sz) + 1;
//            if (i == 9) {
//                cout << u << ' ' << v << endl;
//               cout << lca.getLCA(u, v) << endl;
//            }
//        }
//    }
    int t;
    cin >> t;
    for(int tc = 1; tc <= t; tc++) {
        int m;
        cin >> m;
        resetV(m);
        LCA Solver;
        for (int i = 0; i < m; i++) {
            int n;
            cin >> n;
            for(int j = 0; j < n; j++) {
                int v;
                cin >> v;
                Solver.addEdge(i + 1, v);
            }
        }
        int root = 0;
        Solver.init(root, m);
        int q;
        cin >> q;
        cout << "Case " << tc << ":" << endl;
        while(q--) {
            int u, v;
            cin >> u >> v;
            cout << Solver.getLCA(u, v) + 1 << endl;
        }
    }
    return 0;
}
/*
1
12
0
5 2 2 3 5 6
2 2 8
3 4 4 9
2 2 7
1 2
2 5 12
1 3
2 4 10
1 9
2 11 11
1 7
8 5
0
9 12
0
1
1 1

1
7
3 2 3 4
0
3 5 6 7
0
0
0
0
2
5 7
2 7
 * */