#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> G = {
    {0,20,42,35},
    {20,0,30,34},
    {42,30,0,12},
    {35,34,12,0}
};
int n = 4;
int dp[16][(1 << 16)];
bool ok[16][(1 << 16)];
int tsp(int pos, int mask) {
    if (mask == (1 << n) - 1) return G[pos][0];
    if (ok[pos][mask]) return dp[pos][mask];
    int ans = (int)1e9;
    for(int i = 0; i < n; i++) {
        if (i != pos && !(mask & (1 << i))) ans = min(ans, G[pos][i] + tsp(i, mask | (1 << i)));
    }
    ok[pos][mask] = true;
    dp[pos][mask] = ans;
    return ans;
}
int main() {
    memset(ok,0,sizeof(ok));
    cout << tsp(0,1) << endl;
    return 0;
}