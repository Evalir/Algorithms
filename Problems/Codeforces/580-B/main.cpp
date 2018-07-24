#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;
using ll = long long;

int main() {
    ll n,d;
    cin >> n >> d;
    vector<pair<ll,ll> > V(n);
    for(auto &t : V) cin >> t.first >> t.second;
    sort(V.begin(), V.end());
    ll ans = 0;
    ll cnt = 0;
    ll l = 0, r = 0;
    while(r < (int)V.size() || l < (int)V.size()) {
        if (r < n && V[r].first - V[l].first < d) {
            cnt += V[r].second;
            ans = max(ans,cnt);
            r++;
        }
        if (r < n && V[r].first - V[l].first >= d) {
            cnt -= V[l].second;
            ans = max(ans,cnt);
            l++;
        }
        if (r >= n) {
            cnt -= V[l].second;
            ans = max(ans,cnt);
            l++;
        }
    }
    cout << ans << endl;
    return 0;
}