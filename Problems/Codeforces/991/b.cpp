#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <climits>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> V(n);
  for(int& i : V)
    cin >> i;
  double av = 0.00;
  for(int& i : V)
    av += (double)i*1.00;
  av /= (double)n;
  if (av >= 4.5) {
     cout << 0 << endl;
     return 0;
  }
  sort(V.begin(), V.end());
  int ans = 0;
  for(int i = 0; i < V.size(); i++) {
    V[i] = 5;
    ++ans;
    av = 0;
    for(int j = 0; j < V.size(); j++) {
        av += (double)V[j]*1.00;
    }
    av /= (double)n;
    if (av >= 4.5) {
      cout << ans << endl;
      return 0;
    }
  }
  return 0;

}
