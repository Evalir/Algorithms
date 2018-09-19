#include <bits/stdc++.h>
using namespace std;
using Long = long long;
string LO, HI;
int k, p;
int dp[2010][2010][2][2];
const Long MOD = (int)(1e9) + 7;

int go(int pos, int m, bool l = 1, bool h = 1) {
    Long ans = 0;
    if (pos >= LO.size()) return !m;
    if (dp[pos][m][l][h] != -1) return dp[pos][m][l][h];
    int lo = 0, hi = 9;
    if (l) lo = LO[pos]-'0';
    if (h) hi = HI[pos]-'0';
    for(int dgt = lo; dgt <= hi; dgt++) {
        if (pos % 2 == 1 && dgt != p) continue;
        if (pos % 2 == 0 && dgt == p) continue;
        bool nl = l && lo == dgt;
        bool nh = h && hi == dgt;
        ans += go(pos + 1, ((10*m) + dgt) % k, nl, nh);
        ans %= MOD;
    }
    ans %= MOD;
    return dp[pos][m][l][h] = ans;
}

int main() {
    cin >> k >> p;
    cin >> LO >> HI;
    memset(dp, -1, sizeof(dp));
    cout << go(0, 0) << endl;
    return 0;
}