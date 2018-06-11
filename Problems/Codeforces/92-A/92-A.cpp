#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
  int n,m;
  cin >> n >> m;
  int idx = 1;
  while(true) {
    if (m >= idx)
      m -= idx;
    else
      break;
    ++idx;
    if (idx > n)
      idx = 1;
  }
  cout << m << endl;
  return 0;
}
