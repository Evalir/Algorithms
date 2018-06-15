#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
  int a, b;
  cin >> a >> b;
  for(int i = 1; i <= 1000; i++) {
    int h1 = (i*(i+1))/2;
    int k = i+1;
    int h2 = ((k)*(k+1))/2;
    //cerr << h1 << ' ' << h2 << endl;
    if (abs(a-h1) == abs(b-h2))
    {
      cout << abs(a-h1) << endl;
      break; 
    }
  }
  return 0;

}
