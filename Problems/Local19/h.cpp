#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <cstdio>
#include <set>
#include <map>
#include <queue>
using namespace std;
// DONT USE SCANF !!!!!!!!
// CHECK EVERY LINE OF CODE U DORKS!
// KLK JOA!
// KLK TORIBIO!

#define N 4
// initial values
int n, q;
// query stuff
int type;
long long a,b,k;
long long f0,f1,f2,f3;
// arr to update

const int MOD = 1000000007;

using ll = long long;

struct Matrix {
	vector<vector<ll>> M;
	Matrix() {
		M = vector<vector<ll>> (N, vector<ll>(N));
	}
	
	Matrix operator*(Matrix &b) const {
		Matrix C = Matrix();
		for(int i = 0; i < N; ++i)
			for(int j = 0; j < N; ++j)
				for(int k = 0; k < N; ++k)
					C.M[i][j] = (C.M[i][j] + 1LL * (( M[i][k] * b.M[k][j]) % MOD)) % MOD;
		return C;
	}
	
	Matrix operator+(const Matrix &b) const {
		Matrix C = Matrix();
		for(int i = 0; i < N; ++i)
			for(int j = 0; j < N; ++j)
				C.M[i][j] = (M[i][j] + b.M[i][j]) % MOD;
		return C;
	}
	
	Matrix unit() {
		Matrix C;
		for(int i = 0; i < N; i++)
			C.M[i][i] = 1;
		return C;
	}
};

Matrix modPow(Matrix A, long long n) {
	if (n == 0)
		return A.unit();
	Matrix h = modPow(A, n / 2);
	Matrix o = h*h;
	if (n % 2)
		o = o*A;
	return o;
}

using Long = long long;
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

    Node merge (Node p1, Node p2) {
        return (p1.val + p2.val) % MOD;
    }

    void pushDown(int id, int st, int en, int mid) {
        if (Tree.at(id).isLazy) {
            if (st != en) {
                Tree.at(id*2).lazyVal += (Tree.at(id).lazyVal) % MOD;
                Tree.at(id*2).val += ((mid-st+1) * Tree.at(id).lazyVal) % MOD;
                Tree.at(id*2 + 1).lazyVal += (Tree.at(id).lazyVal) % MOD;
                Tree.at(id*2 + 1).val += (((en)-(mid+1)+1) * Tree.at(id).lazyVal) % MOD;
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
            //assert(false);
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
        if (st > en) {}//assert(false);
        if (st > rIdx || en < lIdx) return;
        if (lIdx <= st && en <= rIdx) {
            Tree.at(id).val += ((en - st + 1) * delta) % MOD;
            Tree.at(id).lazyVal += delta % MOD;
            Tree.at(id).lazyVal %= MOD;
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

void calc() {
    f0 = 0;
    f1 = k;
    f1 %= MOD;
    f2 = (a * k) + k;
    f2 %= MOD;
    f3 = (a * f2) + (b* f1) + k;
    f3 %= MOD;
}

int main() {
    cin >> n >> q;
    SegmentTree ST(vector<Long>(100010, 0));
    while(q--) {
        cin >> type >> a >> b;
        if (type == 1) cin >> k;
        if (type == 1) {
            Matrix m;
            m.M[0][1] = 1;
            m.M[1][2] = 1;
            m.M[2][1] = b;
            m.M[2][2] = a;
            m.M[2][3] = k;
            m.M[3][3] = 1;
            long long subn = a * b;
            long long increment = 0;
            calc();
            if (subn == 0) {
                increment = f0;
            } else if (subn == 1) {
                increment = f1;
            } else if (subn == 2) {
                increment = f2;
            } else {
                Matrix res = modPow(m,subn - 2);
                vector<long long> base = {f0,f1,f2,1};
                vector<long long> multresult(4);
                // multiplicar matriz
                for(int i = 0; i < 4; i++) {
                    long long acc = 0;
                    for(int j = 0; j < 4; j++) {
                        acc += (res.M[i][j] * base[j]) % MOD;
                        acc %= MOD;
                    }
                    multresult[i] = acc % MOD;
                }
                increment = multresult[2] % MOD;
            }
            increment = increment % MOD;
            //cout << "increment: " << increment << "\n";
            // incrementar con fenguis
            ST.update(a, b, increment);
        // type 2 query    
        } else {
            long long sum = ST.query(a,b);
            sum %= MOD;
            cout << sum << endl;
        }
    }
    return 0;
}
