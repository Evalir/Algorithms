#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
  int n,m;
  cin >> n >> m;
  vector<int> a(n),b(m);
  for(int& i : a)
    cin >> i;
  for(int& i : b)
    cin >> i;
  sort(a.begin(),a.end());
  sort(b.begin(),b.end());
  int ans = (int)1e9;
  for(int i = 0 ; i < n; i++) {
    for(int j = 0; j < m; j++) {
      if (a[i] == b[j]) {
        ans = min(ans, a[i]);
      }
      else
      {
        ans = min(ans, (10 * a[i]) + b[j]);
        ans = min (ans, (10 * b[j]) + a[i]);
      }
    }
  }
  cout << ans << endl;
  return 0;
}
