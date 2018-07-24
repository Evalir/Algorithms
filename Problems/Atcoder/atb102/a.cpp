#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <cstdio>
using namespace std;

int main() {
    long long n;
    cin >> n;
    if (n % 2 == 0) {
        cout << n << endl;
        return 0;
    }
    cout << n*2 << endl;
    return 0;
}
