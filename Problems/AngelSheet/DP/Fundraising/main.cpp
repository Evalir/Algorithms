#include <bits/stdc++.h>
using namespace std;
using Long = long long;
using pii = pair<int,int>;

int n;

struct Person {
    Long b, f, d;
    bool operator < (const Person &o ) const {
        if (b != o.b) return b < o.b;
        if (f != o.f) return f > o.f;
        return d > o.d;
    }
    bool operator==(const Person &o ) const {
        return b == o.b && f == o.f && d == o.d;
    }

};

struct FenwickTree {
    vector<Long> tri;
    FenwickTree(int N) : tri(N+10, 0) {}
    void add(int x, Long d) {
        for (int i = x + 1; i < tri.size(); i += i&(-i)) {
            tri[i] = max(tri[i], d);
        }
    }
    Long query(int x) {
        Long ans = 0;
        for (int i = x + 1; i > 0; i -= i&(-i)) {
            ans = max(ans,tri[i]);
        }
        return ans;
    }
};

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    while(cin >> n) {
        map<pii, Long> F;
        for(int i = 0; i < n; i++) {
            Long a, b, c;
            cin >> a >> b >> c;
            F[{a,b}] += c;
        }
        vector<Person> P;
        for(auto &it : F) P.push_back({it.first.first,it.first.second,it.second});
        sort(P.begin(), P.end());
        int n = P.size();
        FenwickTree FT((int)1e5);
        set<Long> S;
        map<Long,Long> Comp;
        for(auto &t : P) S.insert(t.f);
        int lt = 1; //one based cuz fenwick
        for(auto &s : S) Comp[s] = lt++;
        for(int i = 0; i < n; i++) P[i].f =  Comp[P[i].f];
        int last = P[0].b;
        Long ans = 0;
        for(int i = 0 ; i < P.size(); ) {
            while(i < P.size()) {
                if (last != P[i].b) {
                    break;
                }
                Long withThis = FT.query(P[i].f - 1LL) + P[i].d;
                Long cur = FT.query(P[i].f);
                FT.add(P[i].f, max(withThis,cur));
                ans = max(ans, max(withThis,cur));
                i++;
            }
            if (i == P.size()) break;
            last = P[i].b;
        }
        cout << ans << '\n';
    }

    return 0;
}