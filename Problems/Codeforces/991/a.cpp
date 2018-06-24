#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <map>
#include <set>
using namespace std;

using ll = long long;

int main() {
  int a, b, c, n;
  cin >> a >> b >> c >> n;
  int x = a-c, y = b-c;
  if (x < 0 || y < 0 || x + y + c > n-1 )
    cout << -1 << endl;
  else
    cout << n-(x+y+c) << endl;
  return 0;
}
