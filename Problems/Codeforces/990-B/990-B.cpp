#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
  int n,k;
  cin >> n >> k;
  vector<int> arr(n);
  for(int& i : arr)
    cin >> i;
  int ans = n;
  int l = 0, r = 0;
  sort(arr.begin(), arr.end());
  while(r < n) {
    if (arr[r] > arr[l] && arr[r] <= arr[l] + k) {
//      cerr << "eat " << l << " " << r << endl;
      --ans,++l;
      continue;
    }
    else {
      if (arr[r] > arr[l]+k) {
//       cerr << "cant eat " << l << ' ' << r << endl;
        ++l;
        continue;
      }
      else if (arr[r] == arr[l]) {
        ++r;
        continue;
      }
    }
  }

  cout << ans << endl;
  return 0;

}
