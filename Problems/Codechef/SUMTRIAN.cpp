#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll dp[110][110];
ll g[110][110];
int n;
ll go(int r, int c) {
    ll ans = 0;
    if (r >= n || c >= n)
        return 0;
    if (dp[r][c] != -1)
        return dp[r][c];
    ll x = g[r][c] + go(r+1,c);
    ll y = g[r][c] + go(r+1,c+1);
    ans = max(x,y);
    dp[r][c] = ans;
    return ans;
}
int main() {
    int T;
    scanf("%d", &T);
    while(T--) {
        scanf("%d", &n);
        memset(dp, -1, sizeof(dp));
        memset(g, 0, sizeof(g));
        for(int i = 0; i < n; i++)
            for(int j = 0; j <= i; j++)
                scanf("%d", &g[i][j]);

        ll ans = go(0,0);

        cout << ans << endl;
    }
    return 0;

}