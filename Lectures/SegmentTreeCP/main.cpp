#include <bits/stdc++.h>
using namespace std;
using Long = long long;
//This segment tree has lazy propagation.
struct SegmentTree {
private:
    struct Node {
        Long val;
        bool isLazy;
        Long lazyVal;
        Node (Long _v) {
            val = _v;
            isLazy = false;
            lazyVal = 0;
        }
    };

    vector<Long> V;
    vector<Node> Tree;
    const int INF = (1 << 30);

    Node merge (Node p1, Node p2) {
        return p1.val + p2.val;
    }

    void pushDown(int id, int st, int en, int mid) {
        if (Tree.at(id).isLazy) {
            if (st != en) {
                Tree.at(id*2).lazyVal += Tree.at(id).lazyVal;
                Tree.at(id*2).val += (mid-st+1) * Tree.at(id).lazyVal;
                Tree.at(id*2 + 1).lazyVal += Tree.at(id).lazyVal;
                Tree.at(id*2 + 1).val += ((en)-(mid+1)+1) * Tree.at(id).lazyVal;
                Tree.at(id*2).isLazy = true;
                Tree.at(id*2 + 1).isLazy = true;
            }
            Tree.at(id).lazyVal = 0;
            Tree.at(id).isLazy = false;
        }
    }

    void create(int id, int st, int en) {
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

    Node query(int id, int st, int en, int lef, int ri) {
        if (st > ri || en < lef) {
            assert(false);
        }
        int mid = (st + en) / 2;
        if (lef <= st && en <= ri) { //totally inside range
            return Tree.at(id);
        }
        pushDown(id,st,en,mid);
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
            Tree.at(id).val += (en - st + 1) * delta;
            Tree.at(id).lazyVal += delta;
            Tree.at(id).isLazy = true;
            return;
        }
        pushDown(id,st,en,mid);
        update(id*2 + 1, mid + 1, en, lIdx, rIdx, delta);
        update(id*2, st, mid, lIdx, rIdx, delta);
        Tree.at(id) = merge(Tree.at(2*id), Tree.at(2*id + 1));
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
    int tc;
    scanf("%d", &tc);
    while(tc--) {
        int n, q;
        scanf("%d %d", &n, &q);
        vector<Long> V(n + 10);
        SegmentTree bazooka(V);
        while(q--) {
            int ty;
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