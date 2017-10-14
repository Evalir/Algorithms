//Problem A50 from codeforces
//By evalir.io
#include <iostream>
using namespace std;

int main() {
  int m, n;
  int area;
  cin >> m >> n;

  area = m * n;
  int totaldominos = area / 2;
  
  cout << totaldominos << endl;

  return 0;
}
