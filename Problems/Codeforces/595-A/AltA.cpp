#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
  int n, m;
  cin >> n >> m;
  int ans = 0;
  for(int i = 0; i < n; i++) {
    for(int j = 0; j < m; j++) {
      int a, b;
      cin >> a >> b;
      ans += (a | b); //bit manipulation sicario
    }
  }
  cout << ans << endl;
  return 0;
}
