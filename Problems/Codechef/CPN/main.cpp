#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

void solve(int l, int r) {
    int ans = 0;
    for(int i = l; i <= r; i++) {
        if (i % 10 == 2 || i % 10 == 3 || i % 10 == 9)
            ++ans;
    }
    cout << ans << endl;
    return;
}

int main() {
    int T;
    cin >> T;
    while(T--) {
        int l,r;
        cin >> l >> r;
        solve(l,r);
    }
    return 0;
}