//problema palabra simulacion INTEC 2015
#include <iostream>
#include <string>

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


}
