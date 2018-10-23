#include <bits/stdc++.h>
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
        for (int i = x + 1; i > 0; i -= i & (-i)) {
            ans += tri[i];
        }
        return ans;
    }
};
FenwickTree ft(1000010);
int main() {
    int n;
    scanf("%d", &n);
    while(n--) {
        int t;
        scanf("%d", &t);
        if (t == 1) {
            int x;
            scanf("%d", &x);
            ft.add(x,1);
        } else {
            int l, r;
            scanf("%d%d",&l,&r);
            printf("%d\n", ft.query(r) - ft.query(l-1));
        }
    }
    return 0;
}