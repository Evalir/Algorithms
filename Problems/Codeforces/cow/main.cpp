#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <set>
using namespace std;
using ll = long long;

vector<ll> stalls;
ll n, c;

bool check(ll mid) {
    ll cnt = c;
    ll dis = -1;
    for(int i = 0; i < (int)stalls.size(); i++) {
        if (!i) {
            cnt--;
            dis = stalls[i];
        }
        else {
            if (abs(stalls[i]-dis) >= mid) {
                cnt--;
                dis = stalls[i];
            }
            else {
                continue;
            }
        }
    }
    if (cnt <= 0)
        return true;
    return false;
}

ll bsearch(ll lo, ll hi) {
    ll res = -1;
    while(lo <= hi) {

        ll mid = lo + (hi-lo) / 2;
        if (check(mid)) {
            res = mid;
            lo = mid + 1;
        }
        else
            hi = mid - 1;
    }
    return res;
}

int main() {
    int T;
    cin >> T;
    while(T--) {
        cin >> n >> c;
        stalls.assign(n,0);
        for(auto &t : stalls) cin >> t;
        sort(stalls.begin(), stalls.end());
        ll ans = bsearch(0, 1e9+7);
        cout << ans << "\n";
    }
    return 0;
}