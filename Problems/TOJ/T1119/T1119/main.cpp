#include <bits/stdc++.h>
using namespace std;

bool can[1010][1010];
bool ln[1010][1010];
double k[1010][1010];
int n,m;
const int INF = 1 << 30;

double dp(int r, int c) {
    if (r == n && c == m)
        return 0;
    if (r == -1 || c == -1 || r > n || c > m)
        return INF;
    if (ln[r][c])
        return k[r][c];
    double x = 100 + dp(r+1, c);
    double y = 100 + dp(r,c+1);
    double z = INF + 10;
    if (can[r][c])
        z = sqrt(2e4) + dp(r+1,c+1);
    double ans = min(x, min(y,z));
    k[r][c] = ans;
    ln[r][c] = true;
    return ans;
}

int main() {
    cin >> n >> m;
    int q;
    cin >> q;
    memset(can,0,sizeof(can));
    memset(ln, 0, sizeof(ln));
    memset(k,-1.00,sizeof(k));
    while(q--) {
        int l, r;
        cin >> l >> r;
        l--,r--;
        can[l][r] = true;
    }
    double ans = dp(0,0);
    printf("%d", int(ans+0.5));
}
