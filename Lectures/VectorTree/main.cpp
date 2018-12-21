#include <bits/stdc++.h>
using namespace std;
using Long = long long;

struct R {
    vector<Long> V;
    vector<Long> PS;
    Long query(int k) {
        int pos = lower_bound(V.begin(),V.end(), k) - V.begin();
        if (pos == PS.size()) pos--;
        if (pos < 0) return 0;
        if (V[pos] >= k) {
            while(pos >= 0) {
                if (V[pos] < k) break;
                pos--;
            }
        }
        if (pos < 0) return 0;
        if (pos >= 0 && V[pos] < k) return PS[pos];
        else return 0;
    }
    R join(vector<Long> &l, vector<Long> &r) {
        vector<Long> lr;
        merge(l.begin(), l.end(), r.begin(), r.end(), back_inserter(lr));
        vector<Long> ps(lr.size());
        for(int i = 0; i < lr.size(); i++) {
            if (!i) ps[i] = lr[i];
            else ps[i] = lr[i] + ps[i - 1];
        }
        R ret;
        ret.V = lr;
        ret.PS = ps;
        return ret;
    }
};

struct SegmentTree {
private:
    struct Node {
        R r;
        Node () {}
        Node (R nr) {
            r = nr;
        }
    };

    vector<Long> V;
    vector<Node> Tree;
    const int INF = (1 << 30);

    Node merge (Node p1, Node p2) {
        R nr;
        nr = nr.join(p1.r.V,p2.r.V);
        return Node(nr);
    }

    void create(int id, int st, int en) {
        if (st == en) {
            Tree[id].r.V.push_back(V[st]);
            Tree[id].r.PS.push_back(V[st]);
            return;
        }
        int le = id*2;
        int ri = le + 1;
        int mid = (st + en) / 2;
        create(le, st, mid);
        create(ri, mid + 1, en);
        Tree[id] = merge(Tree[le], Tree[ri]);
    }

    Long query(int id, int st, int en, int lef, int ri, int k) {
        int mid = (st + en) / 2;
        if (lef <= st && en <= ri) { //totally inside range
            return Tree[id].r.query(k);
        }
        if (lef > mid) //go right, range is to the right
            return query(id*2 + 1, mid + 1, en, lef, ri, k);
        else if (ri <= mid) // go left
            return query(id*2, st, mid, lef, ri, k);

        Long lQ = query(id*2, st, mid, lef, ri, k);
        Long rQ = query(id*2 + 1, mid + 1, en, lef, ri, k);
        return lQ+rQ;
    }
public:
    SegmentTree(vector<Long> v) {
        V = v;
        Tree = vector<Node>(4*(int)V.size());
        create(1, 0, V.size()-1);
    }

    Long query(int lef, int ri, int k) {
        return query(1, 0, V.size()-1, lef, ri, k);
    }
};

int main() {
    int n, q;
    scanf("%d%d", &n, &q);
    vector<Long> a(n), PS(n);
    for(auto &t : a) scanf("%lld", &t);
    for(int i = 0; i < n; i++) {
        if (!i) PS[i] = a[i];
        else PS[i] = a[i] + PS[i - 1];
    }
    SegmentTree ST(a);
    while(q--) {
        int l, r, k;
        scanf("%d%d%d", &l, &r, &k);
        l--,r--;
        Long tot = PS[r];
        if (l) tot -= PS[l - 1];
        Long mn = ST.query(l,r,k);
        tot -= 2*mn;
        printf("%lld\n",tot);
    }
    return 0;
} //this code solves P4 from DMOJ December contest (2018)