#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <set>
#include <string>
using namespace std;
int main() {
  string S;
  cin >> S;
        K.insert(S[i]), KL.insert(S[i]);
  }
  if (KL.size() != 7) {
    cout << 0 << endl;
  }
  else {
  int ans = 1000000;
  for(auto k : K)
    ans = min(ans, (int)K.count(k));
  
  ans = min(ans, (int)K.count('a') / 2);
  cout << ans << endl;
  return 0;
  }
  return 0;
}
