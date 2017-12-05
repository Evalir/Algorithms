//Problem A546 codeforces, evalir.io

#include <iostream>
using namespace std;

int main() {
  int k = 0,n = 0,w = 0;
  cin >> k >> n >> w;

  int total = 0;

  for(int i = 0; i <= w; i++) {
    total += i*k;  
  }
 // cout << total << endl;
  if (total - n >= 0) cout << total - n << endl;
  else cout << 0 << endl;
  return 0;
}
