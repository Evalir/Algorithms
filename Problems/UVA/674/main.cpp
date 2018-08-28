#include <bits/stdc++.h>
using namespace std;
using Long = long long;
Long dp[10000][10];
vector<int> c = {1,5,10,25,50};

Long go(int pt, int rem) {
    if (pt > 4) return 0;
    if (rem == 0) return 1;
    if (rem < 0) return 0;
    if (dp[rem][pt] != -1) return dp[rem][pt];
    Long x = go(pt, rem - c[pt]);
    Long y = go(pt + 1, rem);
    Long ans = x + y;
    dp[rem][pt] = ans;
    return ans;
}
int main() {
    memset(dp, -1, sizeof(dp));
    int n;
    while(scanf("%d", &n) != EOF) {
        cout << 1LL*go(0,n) << '\n';
    }
    return 0;
}