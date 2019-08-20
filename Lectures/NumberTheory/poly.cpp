/*
 Calculates b^0 + b + b^2 + b^3 + ... + b^(t - 1) + b^t
 using recursion. 
 BP(b,e) - Binary Exponentiation:
 * 1 if e == 0
 * b * BP(b, e - 1) if e is odd
 * BP(b, e / 2)^2 if e is even
 F(b,t) - Polynomial calculation with common factorization
 * 1 if t == 0
 * b^(t - 1) + F(b, t - 1) if t is odd
 * (1 + b^(t / 2)) * F(b, t / 2) if t is even
 * 
 */

#include <bits/stdc++.h>
using namespace std;

const int mod = (int)1e9 + 7;
//Bin expo
long long BP(int b, int e) {
    if (e == 0) return 1LL;
    else if (e % 2) {
        long long ans = (1LL * (b % mod) * (BP(b, e - 1) % mod)) % mod;
        return ans;
    }
    long long ans = BP(b, e / 2) % mod;
    ans *= ans;
    return ans % mod;
}
//Calculates b^0 + b^1 + b^2 + b^3 + ... b^(t - 1) + b^t
long long F(int b, int t) {
    if (t == 1) return 1;
    else if (t % 2) {
        long long ans = (1LL * BP(b, t - 1) % mod) + (1LL * F(b, t -1) % mod);
        return ans % mod;
    }
    long long ans = (1 + BP(b, t / 2) % mod) * (F(b, t / 2) % mod);
    ans %= mod;
    return ans;
}

int main() {
    int t;
    scanf("%d", &t);
    while(t--) {
        int x, n;
        scanf("%d %d", &x, &n);
        long long ans = F(x, n + 1);
        printf("%lld\n", ans);
    }
}
