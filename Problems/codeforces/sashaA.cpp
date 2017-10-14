#include <iostream>
using namespace std;

int main() {

  long long n, k;
  long sasha = 0;
  long lena = 0;
  bool sashaplays = false;
  cin >> n >> k;
  int z = n / k;

  if (z % 2 != 0) {
    cout << "YES" << endl;
  } else {
    cout << "NO" << endl;
  }

}
