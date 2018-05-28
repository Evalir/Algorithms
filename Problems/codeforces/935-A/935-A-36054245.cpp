#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;
  int div = 0;
  for (int i = 1; i <= (n+1)/2; i++) {
    if (n % i == 0) div++;
  }
  
  cout << div << endl;
}