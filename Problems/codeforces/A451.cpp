#include <iostream>
using namespace std;

int main() {
  int n, m, intersection;
  cin >> n >> m;

  intersection = n * m;

  if (intersection % 2 == 0) cout << "Malkiva" << endl;
  else cout << "Akshat" << endl;

}
