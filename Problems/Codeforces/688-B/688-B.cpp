#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cmath>
using namespace std;

int main() {
  string S;
  cin >> S;
  cout << S;
  reverse(S.begin(),S.end());
  cout << S << endl;
  return 0;

}
