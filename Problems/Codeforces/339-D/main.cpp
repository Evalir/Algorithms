#include <bits/stdc++.h>
using namespace std;
using Long = long long;
#define doXOR 1
#define doOR 0
//Ich bin ein sicario
struct SegmentTree {
private:
    struct Node {
        Long val;
        int type;
        Node (Long _v) {
            val = _v;
            type = 3;
        }
        Node (Long _v, int t) {
            val = _v;
            type = t;
        }
    };

    vector<Long> V;
    vector<Node> Tree;
    const int INF = (1 << 30);

    Node merge (Node p1, Node p2) {
        if ((p1.type == 3 && p2.type == 3) || (p1.type == doOR && p2.type == doOR)) {
            return Node(p1.val | p2.val, doXOR);
        } else {
            return Node(p1.val ^ p2.val, doOR);
        }
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
    int n, q;
    scanf("%d%d", &n, &q);
    vector<Long> V(1 << n);
    for(auto &t : V) scanf("%lld", &t);
    SegmentTree ST(V);
    while(q-->0) {
        int i,v;
        scanf("%d%d", &i, &v);
        ST.update(i-1,i-1,v);
        printf("%lld\n", ST.query(0,1 << n));
    }
    return 0;
}
