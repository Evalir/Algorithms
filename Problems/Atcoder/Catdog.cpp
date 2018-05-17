#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
    int a, b, x;
    cin >> a >> b >> x;
    if ( a > x || a + b < x) {
        cout << "NO" << endl;
        return 0;
    }
    else {
        cout << "YES" << endl;
        return 0;
    }
    
}
