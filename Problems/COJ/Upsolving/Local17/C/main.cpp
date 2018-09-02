#include <bits/stdc++.h>
using namespace std;
using ll = long long;
bool isSqrt(ll n) {
    ll sq = sqrt(n) + 1e-9;
    return sq * sq == n;
}
bool isCubic(ll n) {
    ll cub = cbrt(n) + 1e-9;
    return cub * cub * cub == n;
}
bool isFifth(ll n) {
    ll cub = pow(n, 1.0/5) + 1e-9;
    for (int i = max(0LL, cub-2); i <= cub + 2; i++) {
        if (i*i*i*i*i == n) return true;
    }
    return false;
}
bool check(ll n) {
    if (n == 1) return false;
    if (isSqrt(n)) return true;
    if (isCubic(n)) return true;
    if (isFifth(n)) return true;
    for (int i = 2; i*i*i*i*i*i*i <= n; ++i) {
        ll cn = n;
        while (cn % i == 0) cn /= i;
        if (cn == 1) return true;
    }
    return false;
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        ll x;
        cin >> x;
        int ans = 0;
        for(int i = 1; i*i <= x; i++) {
            if (x % i == 0 && check(i)) ans++;
            if (i*i != x && x % i == 0 && check(x/i)) ans++;
        }
        cout << ans << endl;
    }
    return 0;
}