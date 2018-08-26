#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define MOD 1000000007

inline int mod(int a, int b) { return (a % b + b) % b; }

int main() {
    int x,y;
    int n;
    cin >> x >> y >> n;
    x = mod(x,MOD);
    y = mod(y,MOD);
    --n;
    vector<int> f(10);
    f[0] = x % MOD;
    f[1] = y % MOD;
    for(int i = 2; i <= 9; i++) {
        f[i] = mod((mod(f[i-1],MOD)) - (mod(f[i-2],MOD)),MOD);
    }

    cout << f[n%6] << endl;
    return 0;
}