//Problem 1756 UVA dictionary

#include <iostream>
#include <string>
#include <set>
#include <algorithm>
#include <cctype>
#include <sstream>
using namespace std;

int main() {
    string s;
    set<string> dic;

    while (getline(cin, s)) {

      for (int i = 0; i < s.size(); i++) {
        if (ispunct(s[i]) || isdigit(s[i])) {
          s[i] = ' ';
        }
        else if (isupper(s[i])) {
          s[i] = tolower(s[i]);
        }
      }

      istringstream iss(s);
      string word;

      while (iss >> word) {
        dic.insert(word);

      }
    }

    for(string x : dic) {
      cout << x << endl;
    }

    return 0;
}

/*
  - PASOS:
    -Leer linea
    -modificar puntuacion por espacios y tolowercase DONE
    - meter linea en istringstream
    - guardar en set con while(iss >> w)

*/
