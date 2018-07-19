#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;
using ll = long long;
int main() {
  ll n;
  cin >> n;
  ll pos = 1;
  while(n > pos*(pos+1LL)/2LL)
    ++pos;
  --pos;
  ll ans = n - (pos*(pos+1LL)/2LL);
  cout << ans << endl;
  return 0;
}
