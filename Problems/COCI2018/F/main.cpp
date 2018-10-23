#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll n, k;
vector<ll> V(1010);

bool chk(ll x) {
    ll ps = 0LL;
    for(int i = 0; i < n; i++) {
        if (V[i] >= x) ps += x;
        else ps += V[i];
    }
    if (ps/x >= k) return true;
    return false;
}

int main() {
    int T;
    cin >> T;
    int cnt = 0;
    while(T-->0) {
        cnt++;
        cin >> n >> k;
        for(int i = 0; i < n; i++) cin >> V[i];
        ll lo = 1, hi = 100000000000000000LL, res = 0;
        while(lo <= hi) {
            ll md = (lo + hi + 1LL) / 2LL;
            //cout << "lo " << lo << " hi " << hi << " " << md << " md " << endl;
            if(chk(md)) {
                lo = md + 1;
                res = md;
            } else {
                hi = md -1;
            }
        }
        cout << "Case " << cnt << ": " << res << endl;
    }
    return 0;
}