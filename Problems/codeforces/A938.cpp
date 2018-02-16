#include <iostream>
#include <vector>
#include <string>
using namespace std;

bool isVowel(char c) {
  if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'y')
    return true;
  else 
    return false;
}


int main() {
  int n;
  cin >> n;
  string cS;
  cin >> cS;
  bool dN = 0;
  string newString;
  bool rp = 0;
  for (int i = 0; i < n; i++) {
    if (isVowel(cS[i]) && isVowel(cS[i+1])) {
      rp = 1;
      break;
    }
    else {
      continue;
    }
  }
  
  if (!rp) {
    cout << cS << endl;
    return 0;
  }
  
  for(int i = 0; i < n; i++) {
    if (dN) {
      //cerr << "CASE 1" << endl;
      if (isVowel(cS[i+1])) {
        continue;
      }
      else {
        dN = 0;
        continue;
      }
    }
    else {
      if (isVowel(cS[i]) && isVowel(cS[i+1])) {
        dN = 1;
        //cerr << "CASE 2" << endl;
        newString += cS[i];
      }
      else if (isVowel(cS[i]) && !isVowel(cS[i+1])) {
        //cerr << "CASE 4 " << endl;
        newString += cS[i];
      }
      else if (!isVowel(cS[i])) {
        newString += cS[i];
        //cerr << "CASE 3" << endl;
      }
    }
  }
  
  
  cout << newString << endl;
  return 0;
}