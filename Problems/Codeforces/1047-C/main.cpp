#include <bits/stdc++.h>
using namespace std;
int gcd(int x,int y){return y?gcd(y,x%y):x;}
vector<int> F((int)1.5e7 + 5,0), SF((int)1.5e7 + 5, -1);
int main() {
    int n;
    scanf("%d", &n);
    vector<int> V(n);
    int maxi = 0;
    for(auto &t : V) scanf("%d", &t), maxi = max(maxi, t);
    auto Sieve = [&]() {
        bool isPrime[10010];
        memset(isPrime,0,sizeof(isPrime));
        int k = (int)sqrt(maxi) + 10;
        for(int i = 2; i <= k; i++) {
            if(!isPrime[i]) {
                SF[i] = i;
                for(int j = i + i; j <= k; j += i) {
                    isPrime[j] = true;
                    SF[j] = i;
                }
            }
        }
    };
    Sieve();
    int g = 0;
    for(int i = 0; i < n; i++) {
        if (!i) g = gcd(V[i], V[i]);
        else g = gcd(g,V[i]);
    }
    int ans = n;
    for(int i = 0; i < n; i++) {
        int x = V[i] / g;
        while (x > 1) {
            do { x /= SF[x];  } while (x % SF[x] == 0);
            F[SF[x]]++;
            ans = min(ans, n - F[SF[x]]);
        }
    }
    printf("%d\n", n-ans);
    return 0;
}