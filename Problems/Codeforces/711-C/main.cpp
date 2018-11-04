#include <bits/stdc++.h>
using namespace std;

using Long = long long;
int n,m,k;
const Long INF = 1000000000000;
int t[110];
Long mem[101][101][103];
Long c[103][103];
Long dp(int idx, int curk, int prevt) {
    if (curk > k) return INF;
    if (idx >= n) {
        if (curk == k) {
            return 0;
        }
        return INF;
    }
    if (mem[idx][curk][prevt] != -1) return mem[idx][curk][prevt];
    Long ans = INF;
    if (t[idx] != 0) ans = dp(idx + 1, curk + (t[idx] != prevt), t[idx]);
    else {
        for(int i = 1; i <= m; i++) {
            Long cur = c[idx][i] + dp(idx + 1, curk + (i != prevt), i);
            ans = min(ans,cur);
        }
    }
    return mem[idx][curk][prevt] = ans;
}

int main() {
    scanf("%d%d%d", &n, &m, &k);
    for(int i = 0; i < n; i++) scanf("%d", &t[i]);
    for(int i = 0 ; i < n; i++) for(int j = 1; j <= m; j++) scanf("%lld",&c[i][j]);
    memset(mem,-1,sizeof(mem));
    Long ans = dp(0,0,0);
    if (ans >= 1000000000000) printf("-1\n");
    else printf("%lld\n", ans);
    return 0;
}
