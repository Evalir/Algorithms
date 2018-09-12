#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using pll = pair<ll,ll>;

int main() {
    int n,a,b;
    cin >> n >> a >> b;
    vector<int> s(n);
    for(int &t : s) cin >> t;
    bool ok = true;
    int ans = 0;
    for(int i = 0; i < n/2; i++) {
        if (s[i] != s[n-1-i] && s[i] == 2) {
            if (s[n-1-i] == 0) ans += a;
            else if (s[n-1-i] == 1) ans += b;
        }
        else if (s[i] != s[n-1-i] && s[n-1-i] == 2) {
            if (s[i] == 0) ans += a;
            else if (s[i] == 1) ans += b;
        }
        else if (s[i] == 2 && s[n-1-i] == 2) {
            ans += 2*min(a,b);
        }
        else if (s[i] != s[n-1-i] && s[i] != 2 && s[n-1-i] != 2) {
            cout << -1 << endl;
            return 0;
        }
    }
    if (s[n/2] == 2 && ((n & 1))) ans += min(a,b);
    cout << ans << endl;
    return 0;
    return 0;
}