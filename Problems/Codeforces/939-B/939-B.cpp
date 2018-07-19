#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

using ll = long long;

int main() {
  ll n,k;
  cin >> n >> k;
  vector<ll> V(k);
  for(ll& i : V)
    cin >> i;
  pair<ll,ll> ans(1,n%V[0]);
  for(int i = 0; i < k; i++) {
    if (n%V[i] < ans.second) {
      ans.first = i+1;
      ans.second = n%V[i];
    }
  }
  cout << ans.first << ' ' << n/V[ans.first-1] << endl;
  return 0;
}
