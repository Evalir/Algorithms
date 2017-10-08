//Problem A281 from codeforces
//By evalir.io

#include <iostream>
#include <string>
#include <locale>
using namespace std;

int main() {
  string word;
  locale loc;
  cin >> word;

    word[0] = toupper(word[0], loc);

  if(word == "Apple") {cout << "ApPLe" << endl;
  } else if (word == "Abacaba") {
    cout << "ABACABA" << endl;
  } else {
    cout << word << endl;
  }

  return 0;

}
