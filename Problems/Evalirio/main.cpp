#include <bits/stdc++.h>
using namespace std;
using Long = long long;

struct QE {
    enum Type {ELEMENT, QUERY};
    int p,l,r, id;
    Long val;
    Type t;
    bool operator < (const QE o) const {
        if (val == o.val) {
            if (this->t == QUERY) return true;
            return false;
        } else {
            return val < o.val;
        }
    }
};
int anw[200010];
struct FenwickTree {
    //literalmente solo e eta shit
    vector<Long> tri;

    FenwickTree(int N) : tri(N+10, 0) {}

    void add(int x, long d) {
        for (int i = x + 1; i < tri.size(); i += i&(-i)) {
            tri[i] += d;
        }
    }

    Long query(int x) {
        Long ans = 0;
        for (int i = x + 1; i > 0; i -= i&(-i)) {
            ans += tri[i];
        }
        return ans;
    }
};

int main() {

}