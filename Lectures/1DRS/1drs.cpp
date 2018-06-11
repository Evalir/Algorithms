#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
  vector<int> arr = {4,-5,4,-3,4,4,-4,4,-5};
  int n = 9;
  int ans = 0, sum = 0;
  for(int i = 0; i < n; i++) {
    sum += arr[i];
    ans = max(ans,sum);
    if (sum < 0)
      sum = 0;
  }
  cout << "max 1d range sum: " << ans << endl;
  return 0;
}
