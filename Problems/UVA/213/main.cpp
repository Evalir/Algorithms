#include <bits/stdc++.h>
using namespace std;
using pdd = pair<double,double>;
double G[10][10];
int n;
double dp[12][(1 << 16)];
bool ok[12][(1 << 16)];
double tsp(int pos, int mask) {
    if (mask == (1 << n) - 1) return G[pos][0];
    if (ok[pos][mask]) return dp[pos][mask];
    double ans = (int)1e9;
    for(int i = 0; i < n; i++) {
        if (i != pos && !(mask & (1 << i))) ans = min(ans, G[pos][i] + tsp(i, mask | (1 << i)));
    }
    ok[pos][mask] = true;
    dp[pos][mask] = ans;
    return ans;
}
int main() {
    while(scanf("%d", &n) == 1 && n != 0) {
        memset(ok,0,sizeof(ok));
        memset(G,0,sizeof(G));
        vector<pdd> V(n);
        for(int i = 0; i < n; i++) {
            scanf("%lf%lf", &V[i].first, &V[i].second);
        }
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++) {
                if (i != j) G[i][j] = sqrt((V[i].first-V[j].first)*(V[i].first-V[j].first) + (V[i].second-V[j].second)*(V[i].second-V[j].second));
            }
        }
        cout << tsp(0,1) << endl;
    }
    return 0;
}