//problema palabra simulacion INTEC 2015
#include <iostream>
#include <string>

using namespace std;

bool isVowel(char c) {
  if (c == 'a'|| c == 'e' || c == 'i' || c == 'o' || c == 'u') return true;
  else if (c == 'A'|| c == 'E' || c == 'I' || c == 'O' || c == 'U') return true;

  return false;
}

bool isCaps(char c) {
  if (char c >= 65 && char c <= 90) return true;
  else if (char c >= 97 && char c <= 117) return false;
}

int main() {
  string palabra;

  cin >> palabra;
  for (int i = 0; i < palabra.length(); i++) {

    if (!isVowel(palabra[i])) cout << palabra[i];

    else if (isVowel(palabra[i]) && isVowel(palabra[i+1])) {

      if(isCaps(palabra[i]) == true && isCaps(palabra[i+1]) == true) cout << palabra[i] << 'H';

      else if(isCaps(palabra[i]) == true && isCaps(palabra[i+1]) == false) cout << palabra[i] << 'h';

      else if(isCaps(palabra[i]) == false && isCaps(palabra[i+1]) == true) cout << palabra[i] << 'H';

      else if(isCaps(palabra[i]) == false && isCaps(palabra[i+1]) == false) cout << palabra[i] << 'H';
    }
    else cout << palabra[i];

  }




}
