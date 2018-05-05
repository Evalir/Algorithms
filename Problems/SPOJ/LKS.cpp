#include <vector>
#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int dp[510][100000];
int vi[1000], wi[1000];

int solve(int n, int cap) {
    int ans;
    if (n < 0 || cap <= 0)
        return 0;
        
    if (dp[n][cap] != -1)
        return dp[n][cap];
    
    if (wi[n] > cap)
        ans = solve(n-1,cap);
    if (wi[n] <= cap) {
        int x = vi[n] + solve(n-1, cap-wi[n]);
        int y= solve(n-1, cap);
        ans = max(x,y);
    }
    dp[n][cap] = ans;
    return ans;
}

int main() {
    int K, N;
    cin >> K >> N;
    for(int i = 0; i < 501; i++) {
        for(int k = 0; k < 100000; k++) {
            dp[i][k] = -1;
        }
    }
    for(int i = 0; i < N; i++) {
        cin >> vi[i] >> wi[i];
    }
    int ans = solve(N-1,K);
    cout << ans << endl;
    return 0;
    
}
