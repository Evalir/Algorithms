#include <bits/stdc++.h>
using namespace std;
using Long = long long;
int main() {
    Long n, m;
    cin >> n >> m;
    Long lo = 0, hi = (Long)1e5, res = -1;
    while(lo <= hi) {
        Long md = (lo + hi) / 2;
        if ((md*(md-1)/2 >= m)) {
            hi = md - 1;
            res = md;
        } else {
            lo = md + 1;
        }
    }
    cout << max(0LL,n-(2LL*m)) << ' ' << n-res << endl;
    return 0;
}