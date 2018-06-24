#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

using ll = long long;

ll Sn(ll n) {
  ll k = 0;
  while(n > 0) {
    k += n % 10;
    n /= 10;
  }
  return k;
}

int main() {
  ll n;
  cin >> n;
  ll k = Sn(n);
  if (n % k == 0)
    cout << "Yes" << endl;
  else
    cout << "No" << endl;
  return 0;

}
