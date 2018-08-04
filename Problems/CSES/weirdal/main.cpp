#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
    long long n;
    cin >> n;
    cout << n << ' ';
    while(n > 1LL) {
        if (n % 2LL != 0) {
            n *= 3LL;
            n += 1LL;
            cout << n << ' ';
        }
        else {
            n /= 2LL;
            cout << n << ' ';
        }
    }
    return 0;
}