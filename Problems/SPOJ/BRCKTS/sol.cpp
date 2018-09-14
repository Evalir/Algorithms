#include <bits/stdc++.h>
using namespace std;
using Long = int;
//This segment tree has lazy propagation.
struct SegmentTree {
private:
    struct Node {
        Long match;
        Long op;
        Long cl;
        bool isLazy;
        Long lazyVal;
        Node (Long _m, Long _o, Long _c) {
            match = _m;
            op = _o;
            cl = _c;
        }
    };

    vector<char> V;
    vector<Node> Tree;
    const int INF = (1 << 30);

    Node merge (Node p1, Node p2) {
        Node N(0,0,0);
        N.match = p1.match + p2.match + min(p1.op, p2.cl);
        N.op = p1.op + p2.op - min(p1.op, p2.cl);
        N.cl = p1.cl + p2.cl - min(p1.op, p2.cl);
        return N;
    }
    
    void create(int id, int st, int en) {
        if (st == en) {
            if (V[st] == '(')
				Tree[id] = Node(0,1,0);
			else if (V[st] == ')')
				Tree[id] = Node(0,0,1);
            return;
        }
        int le = id*2;
        int ri = le + 1;
        int mid = (st + en) / 2;
        create(le, st, mid);
        create(ri, mid + 1, en);
        Tree.at(id) = merge(Tree.at(le), Tree.at(ri));
        //cout << "Created tree id " << id << " st en " << st << ' ' << en << " alo " <<  Tree[id].match << endl;
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
            if (Tree[id].op)
				Tree[id] = Node(0,0,1);
			else
				Tree[id] = Node(0,1,0);
            return;
        }
        update(id*2 + 1, mid + 1, en, lIdx, rIdx, delta);
        update(id*2, st, mid, lIdx, rIdx, delta);
        Tree.at(id) = merge(Tree.at(2*id), Tree.at(2*id + 1));
    }
public:
    SegmentTree(vector<char> v) {
        V = v;
        Tree = vector<Node>(4*(int)V.size(), Node(0,0,0));
        create(1, 0, V.size()-1);
    }

    bool query(int lef, int ri) {
        return query(1, 0, V.size()-1, lef, ri).op || query(1, 0, V.size()-1, lef, ri).cl ? false : true;
    }
    void update(int lIdx, int rIdx, Long delta) {
        update(1,0,V.size()-1, lIdx, rIdx, delta);
    }
};

int main() {
	ios_base::sync_with_stdio(false);cin.tie(NULL);
	int tc = 10;
	int cnt = 0;
	while(tc-->0) {
		cnt++;
		int n;
		cin >> n;
		vector<char> V(n);
		for(int i = 0; i < n; i++) cin >> V[i];
		cout << "Test " << cnt << ":" << endl;
		int m;
		cin >> m;
		SegmentTree ST(V);
		while(m--) {
			int x;
			cin >> x;
			if (!x) ST.query(0,n-1) ? cout << "YES" << endl : cout << "NO" << endl;
			else {
				ST.update(x-1,x-1,0);
			}
		}
	}
	return 0;
}
