#include <bits/stdc++.h>
using namespace std;
using Long = long long;
Long dp[50][20][5];
vector<Long> sz;
Long go(int pos, int cnt, bool f) {
    if (pos == sz.size()) {
        if (cnt <= 3) return 1LL;
        return 0;
    }
    if (dp[pos][cnt][f] != -1) return dp[pos][cnt][f];
    Long ans = 0, lm;
    if (!f) lm = sz[pos];
    else lm = 9;
    for(int dgt = 0; dgt <= lm; dgt++) {
        bool nf = f;
        if (!f && dgt < lm) nf = true;
        if (!dgt)
            ans += go(pos + 1, cnt, nf);
        else
            ans += go(pos + 1, cnt + 1, nf);
    }
    return dp[pos][cnt][f] = ans;
}
Long solve(Long k) {
    vector<Long> s;
    while(k > 0) {
        s.push_back(k % 10LL);
        k /= 10LL;
    }
    sz.clear();
    sz = s;
    reverse(sz.begin(), sz.end());
    memset(dp, -1LL, sizeof(dp));
    Long ans = go(0,0,0);
    return ans;
}
int main() {
    int n;
    scanf("%d", &n);
    while(n--) {
        Long l, r;
        cin >> l >> r;
        Long range = r-l+1LL;
        Long AR = solve(r);
        Long AL = solve(l-1LL);
        cout << AR-AL << endl;
    }
    return 0;
}
