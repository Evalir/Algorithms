#include <iostream>
#include <string>
#include <vector>
#include <sstream>

int main() {

  int nOfWords;
  std::string word;
  std::cin >> nOfWords;

  for(int i = 0; i < nOfWords; i++) {
    std::cin >> word;

    if(word.length() > 10){
      
      int between = word.length() - 2;
      std::cout << word[0] << between << word[word.length() -1 ] << std::endl;
    } else {
      std::cout << word << std::endl;
    }
  }
}
