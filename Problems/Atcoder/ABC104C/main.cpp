#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <string.h>
using namespace std;
using ll = long long;
ll dp[12][102][10004];
ll q[12],val[12];
ll n, d;

ll solve(int pt, int taken, ll cap) {
    if (pt >= n && cap > 0)
        return (int)1e9;
    if (cap <= 0)
        return 0;
    if (dp[pt][taken][cap] != -1)
        return dp[pt][taken][cap];
    if (q[pt] == taken) {
        dp[pt][taken][cap] =  + solve(pt + 1, 0, cap - val[pt]);
        //cerr << "special " << dp[pt][taken][cap];
        return dp[pt][taken][cap];
    }
    ll x = 1LL + solve(pt, taken + 1, cap - (pt+1));
    ll y = solve(pt + 1, 0, cap);

    ll ans = min(x,y);
    dp[pt][taken][cap] = ans;
    return dp[pt][taken][cap];
}

int main() {
    memset(dp, -1, sizeof(dp));
    cin >> n >> d;
    d /= 100;
    //cerr << d << endl;
    for(int i = 0; i < n; i++) {
        cin >> q[i] >> val[i];
        val[i] /= 100;
    }
    ll ans = solve(0,0, d);
    cout << ans << endl;
    return 0;
}