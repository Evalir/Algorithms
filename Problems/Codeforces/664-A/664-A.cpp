#include <vector>
#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
using namespace std;

int main() {
  string x,y;
  cin >> x >> y;
  if (x == y)
    cout << x << endl;
  else
    cout << 1 << endl; //if x != y, then all the numbers x+1...y have to be divisible by d, which is false because there will be coprime numbers.
  return 0;
}
