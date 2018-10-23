#include <bits/stdc++.h>
using namespace std;
using Long = long long;
struct SegmentTree {
private:
    struct Node {
        Long val;
        Node (Long _v) {
            val = _v;
        }
    };
    vector<Long> V;
    vector<Node> Tree;
    const int INF = (1 << 30);
    Node merge (Node p1, Node p2) {
        return Node(p1.val | p2.val);
    }
    void create(int id, int st, int en) {
        if (st == en) {
            Tree[id] = V[st];
            return;
        }
        int le = id*2;
        int ri = le + 1;
        int mid = (st + en) / 2;
        create(le, st, mid);
        create(ri, mid + 1, en);
        Tree[id] = merge(Tree[le], Tree[ri]);
    }
    Node query(int id, int st, int en, int lef, int ri) {
        if (st > ri || en < lef) {
            assert(false);
        }
        int mid = (st + en) / 2;
        if (lef <= st && en <= ri) { //totally inside range
            return Tree[id];
        }
        if (lef > mid) //go right, range is to the right
            return query(id*2 + 1, mid + 1, en, lef, ri);
        else if (ri <= mid) // go left
            return query(id*2, st, mid, lef, ri);

        Node lQ = query(id*2, st, mid, lef, ri);
        Node rQ = query(id*2 + 1, mid + 1, en, lef, ri);
        return merge(lQ,rQ);
    }
    //range update with delta
    void update(int id, int st, int en, int lIdx, int rIdx, Long delta) {
        int mid = (st+en) / 2;
        if (st > en) assert(false);
        if (st > rIdx || en < lIdx) return;
        if (lIdx <= st && en <= rIdx) {
            Tree[id].val = delta;
            return;
        }
        update(id*2 + 1, mid + 1, en, lIdx, rIdx, delta);
        update(id*2, st, mid, lIdx, rIdx, delta);
        Tree[id] = merge(Tree[2*id], Tree[2*id + 1]);
    }
public:
    SegmentTree(vector<Long> v) {
        V = v;
        Tree = vector<Node>(4*(int)V.size(), 0);
        create(1, 0, V.size()-1);
    }
    Long query(int lef, int ri) {
        return query(1, 0, V.size()-1, lef, ri).val;
    }
    void update(int lIdx, int rIdx, Long delta) {
        update(1,0,V.size()-1, lIdx, rIdx, delta);
    }
};

int main() {
    int n, k, x;
    scanf("%d%d%d", &n, &k, &x);
    vector<Long> V(n + 2);
    for(int i = 1; i <= n; i++) scanf("%lld", &V[i]);
    Long f = x;
    Long ans = 0;
    while(k-- > 1) f *= x;
    SegmentTree ST(V);
    for(int i = 1; i <= n; i++) {
        if (i < n) ans = max(ans, ST.query(0, i - 1) | (V[i]*(f)) | ST.query(i + 1, n));
        else ans = max(ans, ST.query(0, i - 1) | (V[i]*(f)));
    }
    printf("%lld\n", ans);
    return 0;
}