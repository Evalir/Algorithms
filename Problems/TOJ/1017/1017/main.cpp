#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int n;
ll dp[510][510];

ll go(int cand, int rem) {
    if (rem == 0) return 1;
    ll w = 0;
    // increase cand
    if (dp[cand][rem] != -1)
        return dp[cand][rem];
    if (cand + 1 <= rem) {
        w += go(cand + 1, rem);
    }
    // create tower with "cand" blocks
    if (cand <= rem) {
        w += go(cand+1, rem - cand);
    }
    dp[cand][rem] = w;
    return w;
}
int main() {
    cin >> n;
    memset(dp, -1, sizeof(dp));
    ll ans = go(1, n)-1;
    cout << ans << endl;
    return 0;
}
