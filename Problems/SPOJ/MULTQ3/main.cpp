#include <bits/stdc++.h>
using namespace std;
using Long = long long;
//This segment tree has lazy propagation.
struct SegmentTree {
private:
    struct Node {
        int a, b, c;
        bool isLazy;
        Long lazyVal;
        Node() {
            a = 1, b = 0, c = 0;
            isLazy = false;
            lazyVal = 0;
        }
        Node(int x, int y, int z) {
            a = x;
            b = y;
            c = z;
            lazyVal = 0;
            isLazy = false;
        }
    };

    vector<Long> V;
    vector<Node> Tree;
    const int INF = (1 << 30);

    void rotate(int id) {
        int temp = Tree.at(id).c;
        Tree.at(id).c = Tree.at(id).b;
        Tree.at(id).b = Tree.at(id).a;
        Tree.at(id).a = temp;
    }

    Node merge (Node p1, Node p2) {
        return Node(p1.a + p2.a, p1.b + p2.b, p1.c + p2.c);
    }

    void pushDown(int id, int st, int en, int mid) {
        if (Tree.at(id).isLazy) {
            if (st != en) {
                Tree.at(id*2).lazyVal += Tree.at(id).lazyVal % 3;
                for(int i = 0; i < Tree.at(id).lazyVal; i++) {
                    rotate(id * 2);
                }
                Tree.at(id*2 + 1).lazyVal += Tree.at(id).lazyVal % 3;
                for(int i = 0; i < Tree.at(id).lazyVal; i++) {
                    rotate(id * 2 + 1);
                }
                Tree.at(id*2).isLazy = true;
                Tree.at(id*2 + 1).isLazy = true;
            }
            Tree.at(id).lazyVal = 0;
            Tree.at(id).isLazy = false;
        }
    }

    void create(int id, int st, int en) {
        if (st == en) {
            Tree.at(id) = Node(1,0,0);
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
            rotate(id);
            Tree.at(id).lazyVal += delta;
            Tree.at(id).lazyVal = 3;
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
        Tree = vector<Node>(4*(int)V.size());
        create(1, 0, V.size()-1);
    }

    Long query(int lef, int ri) {
        return query(1, 0, V.size()-1, lef, ri).a;
    }
    void update(int lIdx, int rIdx, Long delta) {
        update(1,0,V.size()-1, lIdx, rIdx, delta);
    }
};

int main() {
    int n, q;
    scanf("%d%d", &n, &q);
    vector<Long> s(n);
    SegmentTree ST(s);
    for(int i = 0; i < q; i++) {
        int k,l,r;
        scanf("%d%d%d", &k,&l,&r);
        if (!k) {
            ST.update(l,r,1);
        }
        else {
            printf("%d\n", ST.query(l,r));
        }
    }
    return 0;
}