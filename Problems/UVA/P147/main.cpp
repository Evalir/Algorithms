#include <bits/stdc++.h>
using namespace std;
using Long = long long;
vector<Long> c = {5LL,10LL,20LL,50LL,100LL,200LL,500LL,1000LL,2000LL,5000LL,10000LL};
Long dp[400100][15];
Long go(int pt, Long rem) {
    if (pt > 10) return 0;
    if (rem == 0) return 1LL;
    if (rem < 0) return 0;
    if (dp[rem][pt] != -1) return dp[rem][pt];
    Long x = go(pt, rem - c[pt]);
    Long y = go(pt + 1, rem);
    Long ans = x + y;
    dp[rem][pt] = ans;
    return ans;
}
int main() {
    string S;
    memset(dp, -1, sizeof(dp));
    while(cin >> S && S != "0.00") {
        Long am = stoi(S.substr(0, S.find('.')) + S.substr(S.find('.') + 1));
        Long ans = go(0,am);
        cout << setw(6) << setiosflags(ios::right) << S << setw(17) << setiosflags(ios::right) << ans << endl;
    }
    return 0;
}