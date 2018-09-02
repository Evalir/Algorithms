#include <bits/stdc++.h>
using namespace std;
using Long = long long;
//This segment tree has lazy propagation.
//TODO:
/*
 * - Define sum operator for Node to stop placing .val everywhere
 * */
struct SegmentTree {
private:
    struct Node {
        Long val;
        bool isLazy;
        Long lazyVal;
        Node (Long _v, bool _l, Long _lv) {
            val = _v;
            isLazy = _l;
            lazyVal = _lv;
        }
    };

    vector<Long> V;
    vector<Node> Tree;
    const int INF = (1 << 30);

    Node merge (Node p1, Node p2) {
        return Node(p1.val + p2.val, false,0);
    }

    void create(int id, int st, int en) {
        if (st == en) {
            Tree[id] = Node(V[st], 0, 0);
            return;
        }
        int le = id*2;
        int ri = le + 1;
        int mid = (st + en) / 2;
        create(le, st, mid);
        create(ri, mid + 1, en);
        Tree[id] = merge(Tree[le], Tree[ri]);
        //cout << "Created tree id " << id << " alo " <<  Tree[id].val << endl;
    }

    Node query(int id, int st, int en, int lef, int ri) {
        if (st > ri || en < lef) {
            return Node(0,0,0); //invalid query;
        }
        if (Tree[id].isLazy) {
            Tree[id].val += (en-st+1) * Tree[id].lazyVal;
            if (st != en) {
                Tree[id*2].lazyVal += Tree[id].lazyVal;
                Tree[id*2 + 1].lazyVal += Tree[id].lazyVal;
                Tree[id*2].isLazy = true;
                Tree[id*2 + 1].isLazy = true;
            }
            Tree[id].lazyVal = 0;
            Tree[id].isLazy = false;
        }
        if (lef <= st && en <= ri) { //totally inside range
            return Node(Tree[id].val,0,0);
        }
        int mid = (st + en) / 2;
        if (lef > mid) //go right, range is to the right
            return query(id*2 + 1, mid + 1, en, lef, ri);
        else if (ri <= mid) // go left
            return query(id*2, st, mid, lef, ri);

        Node lQ = query(id*2, st, mid, lef, mid);
        Node rQ = query(id*2 + 1, mid + 1, en, mid + 1, ri);
        return merge(Node(lQ), Node(rQ));
    }
    //range update with delta
    void update(int id, int st, int en, int lIdx, int rIdx, Long delta) {
        if (Tree[id].isLazy) {
            Tree[id].val += (en-st+1) * Tree[id].lazyVal;
            if (st != en) {
                Tree[id*2].lazyVal += Tree[id].lazyVal;
                Tree[id*2 + 1].lazyVal += Tree[id].lazyVal;
                Tree[id*2].isLazy = true;
                Tree[id*2 + 1].isLazy = true;
            }
            Tree[id].lazyVal = 0;
            Tree[id].isLazy = false;
        }
        if (st > en || st > rIdx || en < lIdx) return;
        if (lIdx <= st && en <= rIdx) {
            Tree[id].val += (en-st+1) * delta;
            if (st != en) {
                Tree[id*2].lazyVal += delta;
                Tree[id*2 + 1].lazyVal += delta;
                Tree[id*2].isLazy = true;
                Tree[id*2 + 1].isLazy = true;
            }
            return;
        }

        int mid = (st+en) / 2;

        update(id*2 + 1, mid + 1, en, lIdx, rIdx, delta);
        update(id*2, st, mid, lIdx, rIdx, delta);

        Tree[id] = merge(Tree[2*id], Tree[2*id + 1]);
    }
public:
    SegmentTree(vector<Long> &v) {
        V = v;
        Tree = vector<Node>(4*100010, Node(0,0,0));
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
    int tc;
    cin >> tc;
    while(tc--) {
        int n, q;
        scanf("%d %d", &n, &q);
        vector<Long> V(n + 10);
        SegmentTree bazooka(V);
        while(q--) {
            bool ty;
            scanf("%d", &ty);
            if (!ty) {
                int a,b;
                Long v;
                scanf("%d %d %lld", &a, &b, &v);
                a--,b--;
                bazooka.update(a,b,v);
            }
            else {
                int a,b;
                scanf("%d %d", &a, &b);
                a--,b--;
                printf("%lld\n",bazooka.query(a,b));
            }
        }
    }
    return 0;
}
/*
3
8 6
0 2 4 26
0 4 8 80
0 4 5 20
1 8 8
0 5 7 14
1 4 8

80 6
0 4 5 20
1 8 8
0 2 4 26
0 4 8 80
0 5 7 14
1 4 8

8 6
0 2 4 26
0 4 8 80
0 4 5 20
1 8 8
0 5 7 14
1 4 8
 * */