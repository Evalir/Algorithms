#include <iostream>
#include <vector>
#include <cmath>
#include <string>
#include <cstring>
#include <algorithm>
using namespace std;
string s;
int n;
int dp[200010][4];
int go(int pt, int mod) {
    if (pt >= n && mod) return 0;
    if (pt >= n && !mod) return 1;
    if (dp[pt][mod] != -1) return dp[pt][mod];
    int x, y,z;
    x = y = z = 0;
    if (pt > 0 && !mod)
        x = 1 + go(pt + 1, (s[pt] - '0') % 3);
    y =  go(pt+1, (mod + (s[pt]-'0')) % 3);
    z = go(pt+1, (s[pt]-'0') % 3);
    dp[pt][mod] = max(x,max(y,z));
    return dp[pt][mod];
}
int main() {
    memset(dp,-1, sizeof(dp));
    cin >> s;
    n = s.size();
    int ans = go(0,0);
    cout << ans << endl;
    return 0;
}