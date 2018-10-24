#include <bits/stdc++.h>
using namespace std;
using Long = long long;
using pii = pair<int,int>;
const int MOD = 1000000001;
bool isPrime[2000010];

vector<int> Primes;
Long gcd (Long n1, Long n2) { return (n2 == 0) ? n1 : gcd (n2, n1 % n2); }
void Sieve() {
    for(int i = 2; i <= 10000; i++) {
        if(!isPrime[i]) {
            Primes.push_back(i);
            for(int j = i + i; j <= 10000; j += i) {
                isPrime[j] = true;
            }
        }
    }
}
int ff(Long x, Long p) {
    int k = 0;
    while(x % p == 0) {
        x /= p;
        k++;
    }
    return k;
}

int main() {
    Sieve();
    int n;
    scanf("%d", &n);
    if (n == 1) {
        Long x;
        scanf("%lld", &x);
        printf("%lld\n", (x % MOD));
    } else if (n == 2) {
        Long x,y;
        scanf("%lld%lld", &x,&y);
        Long k = gcd(x,y);
        printf("%lld\n", (((x/k) % MOD) * ((y/k) % MOD)) % MOD);
    } else if (n == 3) {
        Long x, y, z;
        scanf("%lld%lld%lld", &x,&y,&z);
        Long gA = gcd(gcd(x,y),z);
        x /= gA, y /= gA, z /= gA;
        Long g1 = gcd(x,y);
        x /= g1, y /= g1;
        Long g2 = gcd(y,z);
        y /= g2, z /= g2;
        Long g3 = gcd(x,z);
        x /= g3, z /= g3;
        x %= MOD, y %= MOD, z %= MOD;
        printf("%lld\n", (x*y*z) % MOD);
    } else {
        vector<Long> V(n);
        for(auto &t : V) scanf("%lld", &t);
        Long ans = 1LL;
        for(int i = 0; Primes[i] < 1010 && i < Primes.size(); i++) {
            pii maxPowers = {0,0};
            for(int j = 0; j < n; j++) {
                if (V[j] % Primes[i] == 0) {
                    int k = ff(V[j],Primes[i]);
                    V[j] /= pow(Primes[i],k);
                    if (maxPowers.first <= k) {
                        maxPowers.second = maxPowers.first;
                        maxPowers.first = k;
                    }
                }
            }
            Long mx = maxPowers.first-maxPowers.second;
            for(int j = 1; j <= (mx); j++) {
                ans *= Primes[i] % MOD;
                ans %= MOD;
            }
        }
        printf("%lld\n", ans);
    }
    return 0;
}