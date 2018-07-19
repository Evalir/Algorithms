#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
  int arr[10];
  for(int i = 0; i < 6; i++)
    cin >> arr[i];
  for(int i = 0; i < 6; i++) {
    for(int j = 0; j < 6; j++) {
      if (j == i) continue;
      for(int k = 0; k < 6; k++) {
        if (k == j || k == i) continue;
        int ans = 0;
        for(int l = 0; l < 6; l++) {
          if (l == i || l == j || l == k) continue;
          else ans += arr[l];
        }
//        cerr << "ijk" << i << ' ' << j << ' ' << k << ' ' << ans << endl;
        if (arr[i]+arr[j]+arr[k] == ans) {puts("YES"); return 0;}
      }
    }
  }
  puts("NO");
}
