#include <iostream>

int main() {

  for (int i = 0; i <= 100; i++) {
      if (i % 15 == 0) {
        std::cout << "FIZZBUZZ" << std::endl;
      } else if (i % 5 == 0) {
        std::cout << "BUZZ" << std::endl;
      } else if (i % 3 == 0) {
        std::cout << "FIZZ" << std::endl;
      } else {
        std::cout << i << std::endl;
      }
  }
}
