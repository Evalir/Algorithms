#include <iostream>

int main() {

int x = 0;
std::string result = "a";

//Get number
std::cin >> x;

//Print output depending on type
if (x == 2) {
    std::cout << "NO" << std::endl;
} else if (x % 2 == 0) {
    std::cout << "YES" << std::endl;
} else {
    std::cout << "NO" << std::endl;
}

return 0;

}
