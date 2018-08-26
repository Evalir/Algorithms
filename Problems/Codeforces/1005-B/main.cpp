#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <string>
using namespace std;

int main() {
    string s,t;
    cin >> s >> t;
    int a,b;
    a = s.size()-1;
    b = t.size()-1;
    while(s[a] == t[b]) {
        a--,b--;
        if (a < 0) break;
        if (b < 0) break;
    }

    a++,b++;
    cerr << a << ' ' << b << endl;
    cout << abs(a + b) << endl;
    return 0;
}