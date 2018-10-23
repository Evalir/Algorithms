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
        int l = Start[u], r = Start[v];
        if (l > r) swap(l,r);
        int lca = getQuery(l,r);
        return lca;
        //return lca;
    }
};

int main() {
    int n;
    scanf("%d", &n);
    resetV(n);
    LCA lca;
    for(int i = 0;  i < n - 1; i++) {
        int u, v;
        scanf("%d%d", &u, &v);
        lca.addEdge(u,v);
    }
    lca.init(0,n);
    int q;
    scanf("%d",&q);
    while(q--) {
        int r, u, v;
        scanf("%d%d%d", &r,&u,&v);
        r--,v--,u--;
        int lr = lca.getLCA(r,v), lv = lca.getLCA(r,u), lu = lca.getLCA(v,u);
        if (lu != lr && lu != lv) cout << lu + 1 << endl;
        else if (lr != lu && lr != lv) cout << lr + 1 << endl;
        else if (lv != lu && lv != lr) cout << lv + 1 << endl;
        else cout << lu + 1 << endl;
    }
    return 0;
}
