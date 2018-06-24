#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
  string a,b;
  cin >> a >> b;
  int k = 0;
  int z = a.find(b);
  while(z != -1) {
    ++k;
    z = a.find(b,z+b.size());
  }
  cout << k << endl;
  return 0;

}
