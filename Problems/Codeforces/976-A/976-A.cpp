#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <string>
using namespace std;

int main() {
  int n;
  cin >> n;
  string S;
  cin >> S;
  int k = 0,z = 0;
  for(int i = 0; i < S.size(); i++) {
    if (S[i] == '1') ++k;
    if (S[i] == '0') ++z;
  }
  if (k)
    cout << '1';
  if (z)
    for(int i = 0; i < z; i++)
      cout << '0';
  return 0;

}
