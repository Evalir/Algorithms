#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> K = {1,10,100,1000,10000,100000,1000000,10000000,100000000,1000000000};
  int pos = lower_bound(K.begin(),K.end(), n) - K.begin();
  --pos;
  long long ans = 0;
  for(int i = pos; i >= 0; i--) {
    int cnt = n - K[pos] + 1;
    ans += cnt
  }


  cout << ans << endl;
  return 0;


}
