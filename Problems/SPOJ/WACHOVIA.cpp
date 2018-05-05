#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int K, M;
int wei[60],val[60];
int dp[250][2010];

int solve(int n, int cap) {
    int ans;
    if (n < 0 || cap <= 0)
        return 0;
    
    if (dp[n][cap] != -1)
        return dp[n][cap];
    
    if(wei[n] > cap)
        ans = solve(n-1,cap);
    
    if (wei[n] <= cap) {
        int res1 = val[n] + solve(n-1, cap-wei[n]);
        int res2 = solve(n-1, cap);
        ans = max(res1,res2);
    }
    
    dp[n][cap] = ans;
    return ans;
}

int main() {
    int n;
    cin >> n;
    int f = n;
    while(n--) {
        if (f-1 != n)
            cout << endl;
        cin >> K >> M;
        for(int i = 0; i < M; i++) {
            cin >> wei[i] >> val[i];
        }
        for(int i = 0; i < 201; i++)
            for(int k = 0; k < 2000; k++)
                dp[i][k] = -1;
        int ans = solve(M-1, K);
        cout << "Hey stupid robber, you can get " << ans << '.';
    }
    return 0;
}
