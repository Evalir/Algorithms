#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;
using Long = long long;
const int mod = 1000000007LL;
int n, k, d;
Long mem[120][120];
Long dp(int sum, bool path) {
    if (sum > n) return 0;
    if (sum == n) return path;
    if (mem[sum][path] != -1) return mem[sum][path];
    Long ans = 0;
    for(int i = 1; i <= k; i++) {
        ans += (dp(sum + i, path | (i >= d))) % mod;
    }
    ans %= mod;
    if (ans < 0) ans += mod;
    return mem[sum][path] = ans;
}
int main() {
    memset(mem,-1,sizeof(mem));
    cin >> n >> k >> d;
    Long ans = dp(0,0);
    ans %= mod;
    if (ans < 0) ans += mod;
    cout << ans << endl;
    return 0;
}