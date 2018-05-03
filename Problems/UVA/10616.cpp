#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
typedef long long ll;
using namespace std;

int nums [210];
int dp[210][30][30];
int N, M, Q, D;
ll solve(int i,int sum, int tak) {
    if (tak == M) {
        if (sum == 0)
            return 1;
        else
            return 0;
    }
    
    if (i >= N)
        return 0;
    
    if (dp[i][sum][tak] != -1)
        return dp[i][sum][tak];
    
    ll newsum = (sum + nums[i]) % D;
    if (newsum < 0)
        newsum += D;
    ll res1 = solve(i+1, newsum, tak+1);
    ll res2 = solve(i+1, sum % D, tak);
    
    dp[i][sum][tak] = res1+res2;
    return (res1+res2);
}

int main() {
    int s = 0;
    while(cin >> N >> Q && N != 0 && Q != 0) {
        s++;
        cout << "SET " << s << ":" << endl;
        for(int i = 0; i < N; i++)
            cin >> nums[i];
        for(int i = 0; i < Q; i++) {
            for(int i = 0; i <= 200; i++)
                for(int j = 0; j < 30; j++)
                    for(int k = 0; k < 30; k++)
                        dp[i][j][k] = -1;
            cin >> D >> M;
            ll ans = solve(0,0,0);
            cout << "QUERY " << i+1 << ": " << ans << endl;
        }
    }
    
    return 0;
}

