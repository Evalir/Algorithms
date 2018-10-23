#include <bits/stdc++.h>
using namespace std;
using Long = long long;
//This segment tree has lazy propagation.
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
        Long mx = max(p1.val, p2.val);
        Node newNode = {mx};
        return newNode;
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
        int mid = (st + en) / 2;
        if (lef <= st && en <= ri) { //totally inside range
            return Tree.at(id);
        } else {
            if (lef > mid) //go right, range is to the right
                return query(id * 2 + 1, mid + 1, en, lef, ri);
            else if (ri <= mid) // go left
                return query(id * 2, st, mid, lef, ri);

            Node lQ = query(id * 2, st, mid, lef, ri);
            Node rQ = query(id * 2 + 1, mid + 1, en, lef, ri);
            return merge(lQ, rQ);
        }
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
};

int main() {
    int n;
    scanf("%d", &n);
    vector<Long> V(n);
    for(auto &t : V) scanf("%d", &t);
    int q;
    scanf("%d", &q);
    SegmentTree ST(V);
    while(q--) {
        int p, l, r;
        scanf("%d%d%d", &p, &l, &r);
        l--,r--;
        int lo = l, hi = r, res = -2;
        while(lo <= hi) {
            int mid = (lo + hi) / 2;
            if (ST.query(l,mid) >= p) {
                hi = mid - 1;
                res = mid;
            } else {
                lo = mid + 1;
            }
        }
        printf("%d\n", res + 1);
    }
    return 0;
}
