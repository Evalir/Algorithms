#include <bits/stdc++.h>
using namespace std;
using Long = long long;
vector<int> c;
void gen() {
    for(int i = 1; i <= 21; i++) {
        c.push_back(i*i*i);
        cerr << i*i*i << endl;
    }
}
Long dp[10010][25];
Long joa(int pt, int rem) {
    if (pt > 20) return 0;
    if (rem < 0) return 0;
    if (rem == 0) return 1;
    if (dp[rem][pt] != -1) return dp[rem][pt];
    Long x = joa(pt, rem - c[pt]);
    Long y = joa(pt + 1, rem);
    Long ans = x + y;
    dp[rem][pt] = ans;
    return ans;
}

int main() {
    int n;
    gen();
    memset(dp, -1, sizeof(dp));
    while(scanf("%d", &n) != EOF) {
        cout << joa(0, n) << '\n';
    }
    return 0;
}