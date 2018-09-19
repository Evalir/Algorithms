#include <bits/stdc++.h>
using namespace std;
using Long = int;
#define OK 1
#define NOK -1
#define ZERO 0
//This segment tree has lazy propagation.
struct SegmentTree {
private:
    struct Node {
        Long val;
        bool isLazy;
        Long lazyVal;
        Node (Long _v) {
            val = _v;
        }
    };

    vector<int> V;
    vector<Node> Tree;
    const int INF = (1 << 30);

    Node merge (Node p1, Node p2) {
        return p1.val * p2.val;
    }
    
    void create(int id, int st, int en) {
        if (st == en) {
            if (V[st] > 0)
				Tree[id] = Node(1);
			else if (V[st] < 0)
				Tree[id] = Node(-1);
			else
				Tree[id] = Node(0);
            return;
        }
        int le = id*2;
        int ri = le + 1;
        int mid = (st + en) / 2;
        create(le, st, mid);
        create(ri, mid + 1, en);
        Tree.at(id) = merge(Tree.at(le), Tree.at(ri));
        //cout << "Created tree id " << id << " st en " << st << ' ' << en << " alo " <<  Tree[id].pos << " neg " << Tree[id].neg << " z? " << Tree[id].z << endl;
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
            if (delta > 0)
				Tree[id] = Node(1);
			else if (delta < 0)
				Tree[id] = Node(-1);
			else
				Tree[id] = Node(0);
            return;
        }
        update(id*2 + 1, mid + 1, en, lIdx, rIdx, delta);
        update(id*2, st, mid, lIdx, rIdx, delta);
        Tree.at(id) = merge(Tree.at(2*id), Tree.at(2*id + 1));
    }
public:
    SegmentTree(vector<int> v) {
        V = v;
        Tree = vector<Node>(4*(int)V.size(), Node(0));
        create(1, 0, V.size()-1);
    }

    int query(int lef, int ri) {
        Node n = query(1, 0, V.size()-1, lef, ri);
		if (n.val > 0) return OK;
		else if (n.val < 0) return NOK;
		else return ZERO;
    }
    void update(int lIdx, int rIdx, Long delta) {
        update(1,0,V.size()-1, lIdx, rIdx, delta);
    }
};

int main() {
	int n, k;
	while(scanf("%d%d", &n, &k) != EOF) {
		vector<int> V(n);
		for(auto &t : V) cin >> t;
		SegmentTree ST(V);
		string ans = "";
		while(k--) {
			char com;
			int a, b;
			cin >> com;
			if (com == 'C') {
				cin >> a >> b;
				a--;
				ST.update(a,a,b);
			}
			else {
				cin >> a >> b;
				a--,b--;
				int answer = ST.query(a,b);
				cout << (answer == 1? '+' : (answer == 0? '0' : '-'));
			}
		}
		cout << '\n';
	}
	return 0;
}
