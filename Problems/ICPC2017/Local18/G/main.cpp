#include <bits/stdc++.h>
using namespace std;
using Long = long long;
int beauty[51][51];
int res[51][51][101][3];
bool ok[51][51][101][3];
int N,M,K;
int dp(int n, int m, int k, int lr = 3) {
    if (n >= N || m >= M || k < 0)
        return -10000;
    if (k == 0 && n != N-1 && lr == 1) return -100000;
    if (k == 0 && m != M-1 && !lr) return -10000;
    if (n == N-1 && m == M-1) return beauty[n][m];
    if (ok[n][m][k][lr]) return res[n][m][k][lr];
    int ans = 0;
    if (!lr) {
        int y = 0;
        int x = beauty[n][m] + dp(n+1,m,k,lr);
        if (k != 0) {
            y = beauty[n][m] + dp(n,m+1,k-1,1);
        }
        ans = max(x,y);
        ok[n][m][k][lr] = true;
        return res[n][m][k][lr] = ans;
    } else if (lr == 1) {
        int y = 0;
        int x = beauty[n][m] + dp(n,m+1,k,1);
        if (k != 0) {
            y = beauty[n][m] + dp(n+1, m, k-1, 0);
        }
        ans = max(x,y);
        ok[n][m][k][lr] = true;
        return res[n][m][k][lr] = ans;
    } else if (lr == 3) {
        int x, y;
        x = y = 0;
        x = beauty[n][m] + dp(n + 1, m, k, 0);
        y = beauty[n][m] + dp(n, m + 1, k, 1);
        ans = max(x, y);
        ok[n][m][k][lr] = true;
        return res[n][m][k][lr] = ans;
    }
}
int main() {
    int T;
    scanf("%d", &T);
    while(T--) {
        scanf("%d%d%d", &N, &M, &K);
        memset(ok, 0, sizeof(ok));
        for(int i = 0; i < N; i++)
            for(int j = 0; j < M; j++)
                scanf("%d", &beauty[i][j]);
        int ans = dp(0,0,K);
        if (ans < 0) printf("-1\n");
        else printf("%d\n", ans);
    }
    return 0;
}
