#include <cstdio>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

struct FenwickTree {

    vector<int> tri;
    FenwickTree(int N) : tri(N+10, 0) {}
    void add(int x, int d) {
        for (int i = x + 1; i < tri.size(); i += i&(-i)) {
            tri[i] += d;
        }
    }

    int query(int x) {
        int ans = 0;
        for (int i = x + 1; i > 0; i -= i&(-i)) {
            ans += tri[i];
        }
        return ans;
    }
};

int main() {
    int n;
    scanf("%d", &n);
    vector<int> s(n);
    for(int &t : s) scanf("%d", &t);
    int q;
    scanf("%d", &q);
    while(q--) {
        int l,r;
        scanf("%d %d", &l, &r);
        l--,r--;
        reverse(s.begin() + l, s.begin() + r + 1);
        FenwickTree F(n);
        int ans = 0;
        for(int i = 0; i < n; i++) {
            ans += F.query(n) - F.query(s[i]);
            F.add(s[i], 1);
        }
        if (ans & 1) puts("odd");
        else puts("even");
    }
    return 0;
}