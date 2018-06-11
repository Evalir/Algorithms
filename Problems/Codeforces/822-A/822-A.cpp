#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int fact(int n) {
  if (n == 1 || n == 0)
    return 1;
  else
    return n * fact(n-1);
}
int main() {
  int a, b;
  cin >> a >> b;
  int minx = min(a,b);
  cout << fact(minx) << endl;
  return 0;
}
