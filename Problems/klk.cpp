#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

bool isLowercase(char c) { 
  if(c >= 97 && c <= 122) 
    return true; 
  else 
    return false;
}

int main() {
  string S;
  cin >> S;
  bool isFirst = false;
  int cnt = 0;
  for(int i = 0; i < S.size(); i++) {
    if (isLowercase(S[i])) {
      ++cnt;
      if (i == 0)
        isFirst = true;
    }
  }
  
  if ((cnt == 0) || (cnt == 1 && isFirst)) {
    for(int i = 0; i < S.size(); i++) {
      if (isLowercase(S[i]))
        S[i] = toupper(S[i]);
      else
        S[i] = tolower(S[i]);
    }
  }
  cout << S << endl;
  return 0;

}
