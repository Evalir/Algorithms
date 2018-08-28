#include <bits/stdc++.h>
using namespace std;
using Long = long long;

int we[1010];
int p[1010];
Long dp[1010][3010];
int t, n;
Long go(int pt, int cap) {
    if (pt >= n) return 0;
    if (cap <= 0) return 0;
    if (dp[pt][cap] != -1) return dp[pt][cap];
    if (cap-we[pt] < 0) return dp[pt][cap] = go(pt + 1, cap);
    Long w = 0;
    w = max(w, p[pt] + go(pt + 1, cap - we[pt]));
    w = max(w, go(pt + 1, cap));
    dp[pt][cap] = w;
    return w;

}

int main() {
    cin >> t;
    while(t--) {
        memset(dp, -1, sizeof(dp));
        cin >> n;
        for(int i = 0; i < n; i++)
            cin >> p[i] >> we[i];
        int g;
        cin >> g;
        Long ans = 0;
        for(int i = 0; i < g; i++) {
            int x;
            cin >> x;
            ans += go(0, x);
        }

        cout << ans << endl;
    }
    return 0;
}