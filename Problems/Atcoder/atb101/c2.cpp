#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

using ll = long long;

int main() {
  int n;
  cin >> n;
  int k;
  cin >> k;
  vector<ll> V(n);
  for(ll& i : V)
    cin >> i;
  int pt = 0;
  int ans = 0;
  while(pt < n-1) {
    ++ans;
    pt += (k-1);
  }
  cout << ans << endl;
  return 0;

}
