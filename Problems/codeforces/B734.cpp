#include <bits/stdc++.h>
using namespace std;

int main() {
    int k2, k3, k5, k6;
    int a1 = 0, a2 = 0;
    cin >> k2 >> k3 >> k5 >> k6;
    //2 5 6 remain
    while(k2 > 0 && k5 > 0 && k6 > 0) {
        a1++;
        k2--, k5--, k6--;
    }
    if (k3 <= 0 || k2 <= 0) {
        cout << a1*256 << endl;
        return 0;
    }
    while(k3 > 0 && k2 > 0) {
        a2++;
        k3--, k2--;
    }
    int ans = (a1*256) + (a2*32);
    cout << ans << endl;
    return 0;

}
