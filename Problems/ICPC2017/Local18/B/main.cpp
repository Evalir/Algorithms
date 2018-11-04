#include <bits/stdc++.h>
using namespace std;
bool ok1[50][50][50][2][2][2][2];
int res1[50][50][50][2][2][2][2];
string A,B;
const int MOD = 1000000007;
int dp1(int pos, int n23, int n5, bool t2, bool t3, bool bounded, bool AB) {
    if (!AB) {
        if (pos == B.size()) return (t2) && (t3) && (n23 == n5);
        if (ok1[pos][n23][n5][t2][t3][bounded][AB]) return res1[pos][n23][n5][t2][t3][bounded][AB];
        long long ans = 0, lm = 9;
        if (!bounded) lm = B[pos]-'0';
        for(int dgt = 0; dgt <= lm; dgt++) {
            bool nbound = bounded;
            if (!bounded && dgt < lm) nbound = true;
            if (dgt == 2) {
                ans += dp1(pos + 1, n23+1, n5, true, t3, nbound, AB);
                ans %= MOD;
                if (ans <= MOD) ans += MOD;
            }
            if (dgt == 3) {
                ans += dp1(pos + 1, n23 + 1, n5, t2, true, nbound, AB);
                ans %= MOD;
                if (ans <= MOD) ans += MOD;
            }
            if (dgt == 5) {
                ans += dp1(pos + 1, n23, n5 + 1, t2, t3, nbound, AB);
                ans %= MOD;
                if (ans <= MOD) ans += MOD;
            }
            else {
                ans += dp1(pos + 1, n23, n5, t2, t3, nbound, AB);
                ans %= MOD;
                if (ans <= MOD) ans += MOD;
            }
        }
        if (ans <= MOD) ans += MOD;
        ok1[pos][n23][n5][t2][t3][bounded][AB] = true;
        return res1[pos][n23][n5][t2][t3][bounded][AB] = ans % MOD;
    } else {
        if (pos == A.size()) return (t2) && (t3) && (n23 == n5);
        if (ok1[pos][n23][n5][t2][t3][bounded][AB]) return res1[pos][n23][n5][t2][t3][bounded][AB];
        long long ans = 0, lm = 9;
        if (!bounded) lm = B[pos]-'0';
        for(int dgt = 0; dgt <= lm; dgt++) {
            bool nbound = bounded;
            if (!bounded && dgt < lm) nbound = true;
            if (dgt == 2) {
                ans += dp1(pos + 1, n23+1, n5, true, t3, nbound, AB);
                ans %= MOD;
                if (ans <= 0) ans += MOD;
            }
            if (dgt == 3) {
                ans += dp1(pos + 1, n23 + 1, n5, t2, true, nbound, AB);
                ans %= MOD;
                if (ans <= 0) ans += MOD;
            }
            if (dgt == 5) {
                ans += dp1(pos + 1, n23, n5 + 1, t2, t3, nbound, AB);
                ans %= MOD;
                if (ans <= 0) ans += MOD;
            }
            else {
                ans += dp1(pos + 1, n23, n5, t2, t3, nbound, AB);
                ans %= MOD;
                if (ans <= 0) ans += MOD;
            }
        }
        if (ans <= MOD) ans += MOD;
        ok1[pos][n23][n5][t2][t3][bounded][AB] = true;
        return res1[pos][n23][n5][t2][t3][bounded][AB] = ans % MOD;
    }
}

int main() {
    int T;
    scanf("%d", &T);
    while(T--) {
        memset(ok1,0,sizeof(ok1));
        char buf[52];
        scanf("%s", &buf);
        A = buf;
        scanf("%s", &buf);
        B = buf;
        int R = dp1(0,0,0,0,0,0,0);
        cout << "ans for " << R << endl;
        R %= MOD;
        if (R <= 0) R += MOD;
        int L = dp1(0,0,0,0,0,0,1);
        cout << "ans for " << L<< endl;
        L %= MOD;
        if (L <= 0) L += MOD;
        printf("%d\n", R-L);

    }
    return 0;
}