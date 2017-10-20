#include <iostream>
#include <string>
using namespace std;

int main() {
  string s;
  cin >> s;
  bool iFound = false;
  for (int i = 0; i < s.length(); i++) {
    if (s[i]== 'i') {
      iFound = true;
      break;
    }
  }

  if (iFound) cout << "N" << endl;
  else cout << "S" << endl;
}
