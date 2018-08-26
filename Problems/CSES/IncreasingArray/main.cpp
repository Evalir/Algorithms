#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;
using ll = long long;
int main() {
    int n;
    cin >> n;
    vector<ll> s(n);
    for(auto &t : s) cin >> t;
    ll ans = 0;
    for(int i = 0 ; i < n; i++) {
        if (i) {
            if (s[i-1] > s[i]) {
                ans += abs(s[i-1]-s[i]);
                s[i] += abs(s[i-1]-s[i]);
            }
        }
    }
    cout << ans << endl;
    return 0;
}