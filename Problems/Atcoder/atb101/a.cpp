#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main() {
  int ans = 0;
  string S;
  cin >> S;
  for(int i = 0; i < S.size(); i++) {
    if (S[i] == '+') ++ans;
    else
      --ans;
  }
  cout << ans << endl;
}
