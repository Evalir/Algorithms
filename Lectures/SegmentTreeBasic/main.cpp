#include <bits/stdc++.h>
using namespace std;

struct SegmentTree {
private:
    struct Node {
        int val;
        Node (int val = 0):val(val){ }
    };

    vector<int> V;
    Node Tree [4*200010];
    const int INF = (1 << 30);

    Node merge (Node p1, Node p2) {
        return p1.val + p2.val;
    }

    void create(int id, int st, int en) {
        if (st == en) {
            Tree[id] = Node(V[st]);
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
            return 0; //invalid query;
        }
        if (lef <= st && en <= ri) { //totally inside range
            return Tree[id].val;
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

    void update(int id, int st, int en, int arrIdx, int val) {
        if (st == en) {
            Tree[id].val = val;
            return;
        }
        int mid = (st+en) / 2;
        if (arrIdx > mid)
            update(id*2 + 1, mid + 1, en, arrIdx, val);
        else if (arrIdx <= mid)
            update(id*2, st, mid, arrIdx, val);

        Tree[id] = merge(Tree[2*id], Tree[2*id + 1]);
    }
public:
    SegmentTree(vector<int> &v) {
        V = v;
        create(1, 0, V.size()-1);
    }

    int query(int lef, int ri) {
        return query(1, 0, V.size()-1, lef, ri).val;
    }
    void update(int arrIdx, int val) {
        update(1,0,V.size()-1, arrIdx, val);
    }
};
//28 16 27 25 23 25 1 12 24 1 32 22 5 34 23 31 15 36 7 1 26 8 42 24 17 35 17 13 37 10
int main() {
    vector<int> V;
    for(int i = 0; i < 30; i++)
        V.push_back(rand() % 45);
    SegmentTree ST(V);
    for(auto i : V)
        cout << i << ' ';
    cout << endl;
    cout << ST.query(0, 12) << endl;
    cout << ST.query(10, 24) << endl;
    cout << ST.query(3, 4) << endl;
    cout << ST.query(11, 12) << endl;
    cout << ST.query(20, 25) << endl;
    ST.update(0,27);
    cout << ST.query(0,12) << endl;

}
