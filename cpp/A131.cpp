//Problem A131 from codeforces
//By evalir.io

#include <iostream>
#include <string>
#include <algorithm>
#include <locale>
using namespace std;

int main(){
  locale loc;
  string word;
  cin >> word;

  if (all_of(word.begin(), word.end(), isupper ) || all_of(word[1], word.end(), isupper)) {
    for(int i = 0; i < word.length(); i++) {
      word[i] = tolower(word[i]);
    }
  }

  word[0] = toupper(word[0], loc);

}

//Fix code, does not compile.
