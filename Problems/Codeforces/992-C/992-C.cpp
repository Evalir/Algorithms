#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;
using ll = unsigned long long;
#define MOD 1000000007
// Recursive Power Mod
ll rpowmod(unsigned long long x, unsigned long long n, unsigned long long m) {
   if (n == 0) return 1 % m;
   return (n & 1) ?
      (rpowmod((x*x) % m, n/2, m) * x) % m :
       rpowmod((x*x) % m, n/2, m);
}

int main() {
  ll x,k;
  cin >> x >> k;
  if (!x) {cout << 0 << endl; return 0;}
  else {
    x %= MOD;
    cout<<((x*rpowmod(2,k+1,MOD))%MOD-rpowmod(2,k,MOD)+1 + MOD)%MOD;
    return 0;
  }
}
