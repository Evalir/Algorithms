#include <bits/stdc++.h>
using namespace std;
using Long = long long;

int main() {
    Long n,k,x;
    cin >> n >> k;
    if (k > n) {
        cout << k << endl;
    } else {
        Long t = n / k;
        x = k*t;
        if (x <= n) {
            while(x <= n) {
                t++;
                x = (k * (t));
            }
        }
        cout << x << endl;
    }
    return 0;
}