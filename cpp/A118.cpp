#include <iostream>
#include <string>

using namespace std;

int main() {
  string s;
  string dot = ".";
  
  cin >> s;

  for (int i = 0; i < s.size(); i++) {
    s[i] = tolower(s[i]);
  }


  for (int i = 0; i < s.size(); i++) {

    if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u') {
      s.erase(i, 1);
    }
  }

  cout << s << endl;
  
  for (int z = 0; z < s.size(); z++) {
    s.insert(z, 1, '.');
  }

  cout << s << endl;

  

}
