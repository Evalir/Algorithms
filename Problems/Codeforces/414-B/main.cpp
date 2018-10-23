#include <bits/stdc++.h>
using namespace std;
using Long = long long;
bool ok[2010][2010];
int rem[2010][2010];
int n, k;
const int MOD = 1000000007;

int dp(int num, int k) {
    if (k == 0) return 1;
    if (ok[num][k]) return rem[num][k];
    Long ans = 0LL;
    for(int i = 1; i * num <= n; i++) {
        ans += dp(i * num, k - 1) % MOD;
        if (ans < 0) ans += MOD;
    }
    ok[num][k] = true;
    if (ans < 0) ans += MOD;
    return rem[num][k] = ans % MOD;
}

int main() {
    cin >> n >> k;
    memset(ok,0,sizeof(ok));
    cout << dp(1, k) << endl;
    return 0;
}