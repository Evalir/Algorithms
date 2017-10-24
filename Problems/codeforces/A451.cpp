#include <iostream>
using namespace std;

int main() {
  int n, m, biggest;
  cin >> n >> m;
  if (n < m) biggest = n;
  else biggest = m;

  if (biggest % 2 == 0) cout << "Malvika" << endl;
  else cout << "Akshat" << endl;

}
