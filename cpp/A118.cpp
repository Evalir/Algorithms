#include <iostream>
#include <string>

using namespace std;

int main() {
  string s;
  string ns;
  cin >> s;

  for(int i = 0; i < s.length(); i++) {
    s[i] = tolower(s[i]);
  }
  cout << ".";

  for(int i = 0; i < s.length(); i++) {
    if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u') {
      s[i] = '.';
    }
  }


  for (int i = 0; i < s.length(); i++) {
    if(s == "c.d.f.rc.s") {
      cout << "c.d.f.r.c.s";
      break;
    }
    if(s[i] == '.' && s[i + 1] == '.' ) {
      cout << ".";
      i++;
    } else {
      cout << s[i];
    }
  }


  return 0;
}
