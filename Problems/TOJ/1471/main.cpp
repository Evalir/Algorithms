#include <bits/stdc++.h>
using namespace std;
using Long = long long;
using VVI = vector<vector<int>>;
using VI = vector<int>;
//LCA with RMQ
struct Edge {
    Long to, cost = 0;
    Edge(Long _to, Long _cost) {
        to = _to;
        cost = _cost;
    }
};
vector<int> Start;
vector<bool> vis;
vector<Edge> G[100010];
vector<int> Euler, Depth;
vector<Long> Cost(100010,0);
void resetV(int sz) {
    Start.assign(sz, 0);
    vis.assign(sz, 0);
    Euler.clear();
    Depth.assign(sz, 0);
    //Cost.assign(sz + 10,0);
}

struct LCA {
    const int INF = 1 << 30;
    int time = 0;
    LCA() {}
    void addEdge(int u,int v, int w) {
        G[u-1].push_back(Edge(v-1,w));
        G[v-1].push_back(Edge(u-1,w));
    }
    void dfs(int u, int d, Long cost) {
        Cost[u] = cost;
        //cout << "cost for " << u << " : " << cost << endl;
        vis[u] = true;
        Depth[u] = d;
        Start[u] = (int)Euler.size();
        Euler.push_back(u);
        for(auto e : G[u]) {
            if (!vis[e.to]) {
                dfs((int)e.to, d + 1, cost + e.cost);
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
        dfs(root,0,0LL);
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
        int l = Start[u], r = Start[v];
        if (l > r) swap(l,r);
        int lca = getQuery(l,r);
        return lca;
    }
};

int main() {
    int n;
    cin >> n;
    resetV(n + 10);
    LCA lca;
    for(int i = 0; i < n - 1; i++) {
        int u, v, w;
        cin >> u >> v >> w;
        G[u].push_back(Edge(v,w));
        G[v].push_back(Edge(u,w));
    }
    lca.init(0,n);
    int q;
    scanf("%d", &q);
    while(q-->0) {
        int u,v;
        cin >> u >> v;
        Long ans = Cost[u] + Cost[v] - Cost[lca.getLCA(u,v)]*2LL;
        //cout << Cost[u] << " " << Cost[v] << " " << Cost[lca.getLCA(u,v)];
        cout << ans << endl;
    }
    return 0;
}

/*
 8
0 1 1
1 2 2
1 3 3
3 4 4
4 5 5
3 6 6
6 7 7
3
5 7
0 5
 * */