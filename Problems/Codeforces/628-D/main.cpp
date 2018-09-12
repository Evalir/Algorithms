#include <bits/stdc++.h>
using namespace std;
using Long = long long;
string sz;
int k, p;
int dp[2005][2005][3][2][2];
const Long MOD = (int)(1e9) + 7;

int go(int pos, int m, bool f, bool st = 0, bool pa = 0) {
    Long ans = 0, lm = 9;
    if (pos >= sz.size()) return (!m);
    if (dp[pos][m][f][st][pa] != -1) return dp[pos][m][f][st][pa];
    if (!f) lm = sz[pos]-'0';
    for(int dgt = 0; dgt <= lm; dgt++) {
        bool nf = f || dgt < lm;
        bool nst = st || dgt != 0;
        bool npa = (nst ? !pa : pa);
        if (nst && (npa == 0 && dgt != p)) continue;
        if (nst && (npa == 1 && dgt == p)) continue;
        ans += go(pos + 1, ((10*m) + dgt) % k, nf, nst, npa);
        ans %= MOD;
    }
    ans %= MOD;
    return dp[pos][m][f][st][pa] = ans;
}

bool isMagic(string a) {
    //if (a.size() == 1) return true;
    bool ok = true;
    int cnt = 0;
    for(int i = 0; i < a.size(); i++) {
        if ((i % 2 != 1) && a[i]-'0' == p) return false;
        if ((i % 2 != 0) && a[i]-'0' != p) return false;
    }
    for(int i = 0; i < a.size(); i++) {
        cnt *= 10;
        cnt += (a[i]-'0');
        cnt %= k;
    }
    if (ok && !cnt) return true;
    return false;
}

Long solve(string a) {
    sz = a;
    memset(dp, -1, sizeof(dp));
    Long ans = go(0,0,false);
    return ans;
}

int main() {
    cin >> k >> p;
    string x, y;
    cin >> x >> y;
    Long AR = solve(y);
    Long AL = solve(x);
    Long ans = AR-AL;
    if (ans < 0) ans += MOD;
    if (isMagic(x)) ans++;
    cout << ans << endl;
    return 0;
}