#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <cstring>
#include <string>
using namespace std;
using ll = long long;

bool check(ll i, ll d, ll target) {
    ll ans = 1LL + (d*i);
    //cerr << " For " << i << " ans " << ans << endl;
    if (ans <= target)
        return true;
    return false;
}
int main() {
    int t;
    cin >> t;
    while(t--) {
        ll h,w,d;
        cin >> h >> w >> d;
        ll lh = 0;
        ll lo = 0;
        ll hi = h;
        while(lo <= hi) {
            ll mid = (lo+hi)/2;
            bool chk = check(mid, w-1, h);
            //cerr << lo << " lo " << hi << " hi " << mid << " mid " << chk << " check " << endl;
            if (chk) {
                lh = mid;
                lo = mid + 1;
            }
            else {
                hi = mid - 1;
            }
        }
        if (lh & 1) {
            ll ans = w -  abs((1LL + ((w-1LL)*lh))-h);
            if (ans == d) {
                cout << "Yes" << endl;
            }
            else {
                cout << "No" << endl;
            }
        }
        else {
            ll ans = 1LL +  abs((1LL + ((w-1LL)*lh))-h);
            if (ans == d) {
                cout << "Yes" << endl;
            }
            else {
                cout << "No" << endl;
            }

        }
    }
    return 0;
}