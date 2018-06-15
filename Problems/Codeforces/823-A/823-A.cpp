#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
typedef unsigned long long ull;
int main() {
  ull n,k;
  cin >> n >> k;
  ull m = n/k;
  if (m % 2 == 0)
    cout << "NO" << endl;
  else
    cout << "YES" << endl;
  return 0;
}
