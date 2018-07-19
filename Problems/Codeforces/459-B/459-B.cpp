#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <set>
#include <map>
using namespace std;
using ll = long long;

int main() {
  ll n;
  cin >> n;
  vector<ll> V(n);
  ll a = 1000000007,b = -1; 
  for(ll& i : V) {
    cin >> i;
    a = min(a,i);
    b = max(b,i);
  }
  ll x = 0, y = 0;
  for(ll& i : V) {
    if (i == a)
      ++x;
    if (i == b)
      ++y;
  }
  cout << b-a << ' ' << (a == b ? (n*(n-1)/2)*1LL : x*y)  << endl;
  return 0;
}
