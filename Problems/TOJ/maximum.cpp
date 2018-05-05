#include <cstdio>
#include <algorithm>
#include <vector>
#include <cmath>
typedef long long ll;
using namespace std;

ll dp[(int)1e6+10],ans[(int)1e6+10];
int main() {
    dp[0] = 0, ans[0] = 0;
    dp[1] = 1, ans[1] = 1;
    for(int i = 2; i < (int)1e6; i++) {
        if (i&1) {
            dp[i] = dp[i/2] + dp[(i/2)+1];
            ans[i] = max(dp[i], ans[i-1]);
        }
        else {
            dp[i] = dp[i/2];
            ans[i] = max(dp[i], ans[i-1]);
        }
    }
    int n;
    while(scanf("%d", &n) == 1 && n != 0) {
        printf("%lld\n", ans[n]);
    }
    
    return 0;
}
