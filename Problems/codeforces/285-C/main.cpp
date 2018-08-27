#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main() {
    int n;
    cin >> n;
    vector<ll> s(n);
    for(ll &t : s) cin >> t;
    sort(s.begin(), s.end());
    ll ans = 0;
    ll  cnt = 1;
    for(int i = 0; i < n; i++) {
        if (s[i] != cnt && i == cnt-1) {
            ans += abs(s[i]-cnt);
            cnt++;
        }
        else cnt++;
    }
    cout << ans << endl;
    return 0;
}
//
//-3 -3 3 3 5
//4   5   1