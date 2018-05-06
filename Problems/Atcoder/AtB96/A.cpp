#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int a, b, ans = 0;
    cin >> a >> b;
    if (a > b) {
        cout << a - 1 << endl;
        return 0;
    }
    else
        cout << a << endl;
    return 0;
    
}
