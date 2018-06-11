#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <string>
using namespace std;

int main() {
  string S;
  cin >> S;
  bool fzero = false;
  string ns;
  for(int i = 0; i < S.size(); i++) {
     if (S[i] == '0' && !fzero) {
       fzero = true;
       continue;
     }
     if (S[i] == '1')
       ns += S[i];
     if (S[i] == '0' && fzero)
       ns += S[i];
  }

  if (fzero)
    cout << ns << endl;
  else
      for(int i = 0; i < S.size()-1; i++)
        cout << S[i];
  puts("");
  return 0;

}
