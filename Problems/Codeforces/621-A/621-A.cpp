#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;
typedef long long ll;
int main() {
  int n;
  cin >> n;
  vector<ll> o;
  ll ans = 0;
  for(int i = 0; i < n; i++) {
    ll x;
    cin >> x;
    if (x & 1)
      o.push_back(x);
    else
      ans += x;
  }
  ll cnt = ans;
  sort(o.begin(), o.end(), greater<ll>());
  for(auto& i : o) {
    cnt += i;
    if (cnt % 2 == 0)
      ans = cnt;
  }

  cout << ans << endl;
  return 0;

}
