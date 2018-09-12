#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, c;
    a = 1, b = 2, c = 3;
    int t = c;
    c = b;
    b = a;
    a = t;
    cout << a << ' ' << b << ' ' << c << endl;
    return 0;

}
