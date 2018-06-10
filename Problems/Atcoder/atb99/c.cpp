#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <set>
using namespace std;

int main() {
  int n;
  cin >> n;
  set<int> p6,p9;
  for(int i = 0; i <= 10; i++)
    if (pow(6,i) <= 100000)
      p6.insert(pow(6,i));
  for(int i = 0; i <= 10; i++)
    if (pow(9,i) <= 100000)
      p9.insert(pow(9,i));
  int ans = 0;

  if (n == 1 || p6.count(n) > 0 || p9.count(n) > 0) {
    cout << 1 << endl;
    return 0;
  }  
  if (n < 6) {
    cout << n << endl;
    return 0;
  }
  while(n != 0) {
    cerr << n << endl;
    bool ok = false;
    if (n % 3 != 0) {
      --n;
      ++ans;
      continue;
    }
    cerr << p6.count(n) << " p6 n" << endl;
    cerr << p9.count(n) << " p9 n" << endl;
    if (p6.count(n) > 0 | p9.count(n) > 0) {
      cout << ans + 1 << endl;
      return 0;
    }
    for(auto k : p6) {
      cerr << "finding " << n-k << " on" << n << endl;
      if (p6.count(n-k) > 0 || p9.count(n-k) > 0) {
        cout << "found" << endl;
        n -= k;
        ++ans;
        ok = true;
        break;
      }
    }
    if (ok) 
      continue;
    for(auto k : p9) {
      cerr << "finding " << n-k << " on" << n << endl;
      if (p9.count(n-k) > 0 || p6.count(n-k) > 0) {
        cerr << "found" << endl;
        n -= k;
        ++ans;
        ok = true;
        break;
      }
    }
    if (ok)
      continue;
    n -= 9;
    ++ans;
  }
  cerr << "ans is " << ans << endl;
  cout << ans << endl;
}
