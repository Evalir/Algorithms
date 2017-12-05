//Problem 58A from codeforces
//by evalir.io
#include <iostream>
#include <string>
using namespace std;

int main() {
  string s;
  string ns;

  cin >> s;

  for(int i = 0; i < s.length(); i++) {
    if (s[i] == 'h' && ns.empty()) ns += s[i];
    if (s[i] == 'e' && ns.length() == 1) ns += s[i];
    if ((s[i] == 'l' && ns.length() == 2) || (s[i] == 'l' && ns.length() == 3)) ns += s[i];
    //if (s[i] == 'l' && ns.length() == 3) ns += s[i];
    if (s[i] == 'o' && ns.length() == 4) ns += s[i];
  }

  if (ns == "hello") {
    cout << "YES" << endl;
    //cout << ns << endl;
  } else {
    cout << "NO" << endl;
    //cout << ns << endl;
  }

}
