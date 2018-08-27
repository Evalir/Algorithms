#include <bits/stdc++.h>
using namespace std;

int dp[1010][2010];
int di[1010];
int mi[1010];
int n, hp;

int go(int pt, int rem) {
    int ans = 0;
    if (pt >= n && rem > 0)
        return (int)1e9+7;
    if (rem <= 0)
        return 0;
    if (dp[pt][rem] != -1)
        return dp[pt][rem];
    int x = mi[pt] + go(pt+1, rem-di[pt]);
    int y = go(pt+1, rem);
    //cout << x << " " << y << "  pt " << pt << " rem " << rem << endl;
    ans = min(x,y);
    dp[pt][rem] = ans;
    return ans;
}

int main() {
    while(cin >> n >> hp) {
        for(int i = 0; i < n; i++)
            cin >> di[i] >> mi[i];
        memset(dp, -1, sizeof(dp));
        int ans = go(0,hp);
        if (ans == (int)1e9+7) puts("-1");
        else cout << ans << endl;
    }

    return 0;
}