#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int m, n;
int p[200],f[200];
int memo[200][15000];

int joa(int k, int cap) {
    int ans;
    if (cap > m && m < 1800)
        return -1000;
    if (cap > m + 200)
        return -1000;
        
    if (k == n) {
        if (cap > m && cap <= 2000)
            return -1000;
        return 0;
    }
        
    if (memo[k][cap] != -1)
        return memo[k][cap];

        int res1 = f[k] + joa(k+1, cap+p[k]);
        int res2 = joa(k+1, cap);
        ans = max(res1,res2);
    memo[k][cap] = ans;
    return ans;
}

int main() {
    while(cin >> m >> n) { 
        for(int i = 0; i < 200; i++)
            for(int j = 0; j < 15000; j++)
                memo[i][j] = -1;
        for(int i = 0; i < n; i++)
            cin >> p[i] >> f[i];
         int ans;
        ans = joa(0, 0);
        cout << ans << endl;
    }
    return 0;
}
