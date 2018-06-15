#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
  int n;
  cin >> n;
  for(int i = 0; i < n; i++) {
    int x; cin >> x;
    if (x & 1) {
      cout << "First" << endl;
      return 0;
    }
  }
  cout << "Second" << endl;
  return 0;
}
