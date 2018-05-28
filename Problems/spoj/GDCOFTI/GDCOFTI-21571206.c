#include <iostream>
#include <cmath>
using namespace std;
typedef unsigned long long ull;

ull rgcd(ull a, ull b) {
   return b == 0 ? a : rgcd(b, a % b);
}


int main() {
    ull a, b, c;
    cin >> a >> b >> c;
    ull ans = rgcd(rgcd(a,b), c);
    cout << ans << endl;
    return 0;
}
