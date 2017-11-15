//find sum of all multiples of 3 and 5 below 1000
#include <iostream>
#include <cstring>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
typedef vector<int> VI;

int main() {
    int sum = 0;
    for (int i = 0; i < 1000; i++) {
        if (i % 3 == 0 || i  % 5 == 0) sum += i;
    }

    cout << sum << endl;

    return 0;
}
