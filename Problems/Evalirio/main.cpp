#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        long long  x, y, a, b;
        cin >> x >> y >> a >> b;
        bool can1 = true, can2 = true;
        if (a % y == 0 && b % y == 0) {
            long long l = a / y, r = b / y;
            if (x - l - r != 0) can1 = false;
        } else can1 = false;
        if (b % x == 0 && a % x == 0) {
            long long l = a / x, r = b / x;
            if (y - l - r != 0) can2 = false;
        }
        can1 || can2 ? cout << "Yes\n" : cout << "No\n";
    }
    return 0;
}