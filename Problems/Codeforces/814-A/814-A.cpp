#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
  int n, k;
  cin >> n >> k;
  vector<int> a(n),b(k);
  for(int &i : a)
    cin >> i;
  for(int &i : b)
    cin >> i;
  sort(b.begin(), b.end(), greater<int>());
  int z = 0, x = 0;
  while(x < n) {
    if (a[x] == 0 && z < k) {
      a[x] = b[z];
      ++z;
    }
    else if (a[x] == 0 && z >= k) {
      cout << "No" << endl;
      return 0;
    }
    ++x;
  }
  bool ok = false;
  for(int i = 0; i < n-1; i++) {
    if (a[i] >= a[i+1])
      ok = true;
  }
  if (ok)
    cout << "Yes" << endl;
  else
    cout << "No" << endl;
  return 0;
}
