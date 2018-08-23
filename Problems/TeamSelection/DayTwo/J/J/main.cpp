#include <bits/stdc++.h>
using namespace std;
using LL = long long;
bool check(vector<LL> &s, LL len, int rem) {
    for(int i = 0; i < (int)s.size(); i++) {
        if (s[i]) {
            i += len-1;
            rem--;
        }
    }
    if (rem >= 0)
        return true;
    return false;
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n,k;
        cin >> n >> k;
        vector<LL> s(n);
        for(LL &t : s) cin >> t;
        LL ans = 0;
        LL lo = 0, hi = 1 << 30;
        while(lo <= hi) {
            LL mid = lo + (hi-lo) / 2;
            bool chk = check(s, mid, k);
            cerr << lo << " lo " << hi << " hi " << mid << " mid " << chk << " check " << endl;
            if (chk) {
                hi = mid - 1;
                ans = mid;
            }
            else {
                lo = mid + 1;
            }
        }
        cout << ans << " is" << '\n';
    }
    return 0;
}
