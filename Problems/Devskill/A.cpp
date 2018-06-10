#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cmath>
using namespace std;

int main() {
  int T;
  cin >> T;
  while(T--) {
    int a,b;
    cin >> a >> b;
    if (a > b) {
      cout << "Argentina " << a << " - " << b << " Brazil" << endl;
      continue;
    }
    else {
      cout << "Brazil " << b << " - " << a << " Argentina" << endl;
    }
  }
  return 0;
}
