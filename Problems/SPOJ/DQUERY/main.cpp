#include <bits/stdc++.h>
using namespace std;
using Long = int;
struct SegmentTree {
private:
    struct Node {
        Long val;
        bool isLazy;
        Long lazyVal;
        set<Long> S;
        Node (Long _v) {
            val = _v;
            isLazy = false;
            lazyVal = 0;
            S.insert(_v);
        }
        Node (set<Long> _S) {
            S = _S;
        }
    };

    vector<Long> V;
    vector<Node> Tree;
    const int INF = (1 << 30);

    Node merge (Node p1, Node p2) {
        vector<int> t;
        std::merge(p1.S.begin(), p1.S.end(), p2.S.begin(), p2.S.end(), back_inserter(t));
        return Node(set<Long>(t.begin(),t.end()));
    }

    inline void create(int id, int st, int en) {
        if (st == en) {
            Tree.at(id) = V.at(st);
            return;
        }
        int le = id*2;
        int ri = le + 1;
        int mid = (st + en) / 2;
        create(le, st, mid);
        create(ri, mid + 1, en);
        Tree.at(id) = merge(Tree.at(le), Tree.at(ri));
        //cout << "Created tree id " << id << " alo " <<  Tree[id].val << endl;
    }

    inline Node query(int id, int st, int en, int lef, int ri) {
        if (st > ri || en < lef) {
            assert(false);
        }
        int mid = (st + en) / 2;
        if (lef <= st && en <= ri) { //totally inside range
            return Tree.at(id);
        }
        if (lef > mid) //go right, range is to the right
            return query(id*2 + 1, mid + 1, en, lef, ri);
        else if (ri <= mid) // go left
            return query(id*2, st, mid, lef, ri);

        Node lQ = query(id*2, st, mid, lef, ri);
        Node rQ = query(id*2 + 1, mid + 1, en, lef, ri);
        return merge(lQ,rQ);
    }

public:
    SegmentTree(vector<Long> v) {
        V = v;
        Tree = vector<Node>(4*(int)V.size(), 0);
        create(1, 0, V.size()-1);
    }

    Long query(int lef, int ri) {
        return query(1, 0, V.size()-1, lef, ri).S.size();
    }
};

int main() {
    int n;
    scanf("%d", &n);
    vector<int> V(n);
    for(int i = 0; i < n; i++) scanf("%d", &V[i]);
    SegmentTree ST(V);
    int q;
    scanf("%d", &q);
    for(int i = 0; i < q; i++) {
        int l,r;
        scanf("%d%d",&l,&r);
        l--,r--;
        printf("%d\n", ST.query(l,r));
    }
    return 0;
}
