#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;
using Long = long long;

int main() {
    Long n, k;
    cin >> n >> k;
    if (k <= n) {
        cout << (k-1)/2 << endl;
    }
    else {
        Long en = n;
        Long st = (k - en);
        if (st > en) {
            cout << 0 << endl;
            return 0;
        }
        Long ans = en-st+1;
        cout << ans/2 << endl;
    }
    return 0;
}