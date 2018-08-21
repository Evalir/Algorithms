#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <map>
using namespace std;

struct Fraction {
    int num;
    int den;
    Fraction(int x, int y) {
        num = x;
        den = y;
    }
    Fraction() {
        num = 0;
        den = 1;
    }
    bool operator==(const Fraction o) const {
        return num == o.num && den == o.den;
    }
    bool operator<(const Fraction o) const {
        return num*1LL*o.den <  o.num*1LL*den;
    }

};
int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}