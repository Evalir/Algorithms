#include <bits/stdc++.h>

using namespace std;

struct Person {
    int beauty, fortune, donation;
    bool operator<(const Person& p) const {
        if (fortune != p.fortune)
            return fortune < p.fortune;
        return beauty < p.beauty;
    }
    bool operator==(const Person& p) const {
        return !(*this < p || p < *this);
    }
};

int N;
vector<Person> persons;
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
        return max(p1.val, p2.val);
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
            Tree.at(id).val = delta;
            return;
        }
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

long long solve() {
    sort(persons.begin(), persons.end());

    vector<Person> P;
    P.push_back(persons[0]);
    for (int i = 1; i < N; ++i) {
        if (persons[i] == persons[i-1])
            P.back().donation += persons[i].donation;
        else
            P.push_back( persons[i] );
    }
    SegmentTree ST(vector<Long>(100010));
    N = P.size();
    vector<long long> DP(N);
    for (int i = 0, first_i = 0; i < N; ++i) {
        // si fortune cambio con respecto al anterior mete todos de [first_i hasta i-1] en el ST
        if (i > 0  && persons[i].fortune != persons[i - 1].fortune) {
            for(first_i; first_i < i; first_i++) {
                ST.update(0, persons[first_i].beauty, DP[first_i]);
            }
        }
        long long mx = 0;
        mx = ST.query(0, P[i].beauty - 1); //query best DP range from 0 beauty - 1
        DP[i] = mx + P[i].donation;

        //   cerr << P[i].beauty << ' ' << P[i].fortune
        //        << ' ' << P[i].donation << ' ' << DP[i] << endl;
    }

    return *max_element( DP.begin(), DP.end() );
}

int main() {

    while (cin >> N) {
        persons.clear();
        for (int i = 0; i < N; ++i) {
            int b, f, d;
            cin >> b >> f >> d;
            persons.push_back({b, f, d});
        }
        long long res = solve();
        cout << res << '\n';
    }

    return 0;
}