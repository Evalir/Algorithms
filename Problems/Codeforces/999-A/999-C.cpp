#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <string>
using namespace std;

int main() {
  int n,k;
  cin >> n >> k;
  vector<int> V(n);
  for(int& i : V)
    cin >> i;
  int l = 0, r = n-1;
  int ans = 0;
  bool ok = true;
  while (l <= r) {
    if (V[l] <= k) {++ans, ++l; continue;}
    else if (V[r] <= k) {++ans, --r; continue;}
    else {
      break;
    }
  }
  cout << ans << endl;
  return 0;
}
