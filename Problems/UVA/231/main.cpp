#include <bits/stdc++.h>
using namespace std;

int dp[100010];
int main() {
    int k = 0, n = 0;
    int mc = 0;
    memset(dp, 1, sizeof(dp));
    while(scanf("%d", &k)) {
        vector<int> s;
        if (k != -1) {
            s.push_back(k);
        }
        else if (k == -1 && mc == 0) {
            mc++;
            for(auto i : s) cout << i << ' ';
        }
    }
    return 0;
}