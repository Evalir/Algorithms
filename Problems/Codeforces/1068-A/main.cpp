#include <bits/stdc++.h>
using namespace std;
using Long = long long;
using pll = pair<Long,Long>;

int main() {
    Long N,M,K,L;
    cin >> N >> M >> K >> L;
    Long ans = (N)/M;
    ans *= M;
        Long lo = 0, hi = ans/M, res = ans/M;
        while(lo <= hi) {
            Long mid = (lo + hi) / 2LL;
            Long coins = M*mid;
            //cout << lo << " " << hi << " " << mid << endl;
            if (coins-K >= L) {
                hi = mid - 1;
                res = mid;
            } else {
                lo = mid + 1;
            }
        }
        if ((res*M)-K >= L)cout << res << endl;
        else cout << -1LL << endl;

    return 0;
}