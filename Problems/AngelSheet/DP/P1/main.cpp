#include <bits/stdc++.h>
using namespace std;

int dp[200000];
int main() {
    int n;
    cin >> n;
    vector<int> V(n);
    for(int i = 0; i < n; i++) cin >> V[i];
    memset(dp,0,sizeof(dp));
    for(int i = 0; i < n; i++) {
        dp[i] = 1;
        if (i) {
            if (V[i - 1] <= V[i]) dp[i] = 1 + dp[i - 1];
        }
    }
    cout << *max_element(dp, dp + n) << endl;
    return 0;
}
