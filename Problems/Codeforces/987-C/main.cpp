#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>
#include <cstring>
using namespace std;
using ll = long long;
ll m[3005][3005][3];
ll s[3010], c[3010];
const int INF = (1 << 30);

ll dp(int pt, int prev, int rem) {
    if (!rem)
        return 0;
    if (pt < 0)
        return INF;
    if (m[pt][prev][rem] != -1)
        return m[pt][prev][rem];
    ll x = dp(pt-1, prev, rem);
    if (s[pt] < s[prev])
        x = min(x,c[pt] + dp(pt-1,pt,rem-1));
    m[pt][prev][rem] = x;
    return x;
}

int main() {
    int n;
    cin >> n;
    memset(s,0,sizeof(s));
    memset(c,0,sizeof(c));
    for(int i = 0; i < n; i++)
        cin >> s[i];
    for(int i = 0; i < n; i++)
        cin >> c[i];
    memset(m,-1,sizeof(m));
    s[n] = INF;
    ll ans = dp(n-1,n,3);
    if (ans >= INF)
        cout << -1 << endl;
    else
        cout << ans << endl;

    return 0;
}