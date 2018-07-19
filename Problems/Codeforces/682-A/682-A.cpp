#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

using ll = long long;

int main() {
  ll n,m;
  cin >> n >> m;
  vector<ll> a(5),b(5);
  for(int i = 1; i <= n; i++)
      ++a[i%5];
  for(int i = 1; i <= m; i++)
      ++b[i%5];
  ll ans = (a[0]*b[0]) + (a[1]*b[4]) + (a[2]*b[3]) + (a[3]*b[2]) + (a[4]*b[1]);
  cout << ans << endl;
  return 0;

}
