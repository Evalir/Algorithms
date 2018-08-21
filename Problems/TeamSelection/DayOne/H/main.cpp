#include <iostream>
#include <cmath>
#include <stack>
#include <map>
#include <algorithm>
#include <vector>

using namespace std;
using ll = long long;

int main() {
    ll n;
    cin >> n;
    vector<ll> o, e;
    ll ans = 0;
    for(int i = 0; i < n; i++) {
        ll x;
        cin >> x;
        ans += x;
        if (x & 1) o.push_back(x);
        else e.push_back(x);
    }
    sort(o.begin(), o.end());
    sort(e.begin(), e.end());
    int p, t;
    p = t = 0;
    if (!(ans & 1)) {
        cout << ans << endl;
        return 0;
    }
    else {
        while(p < o.size() && ans & 1) {
            ans -= o[p];
            p++;
        }
    }
    if (!(ans & 1))
        cout << ans << endl;
    else
        cout << 0 << endl;

    return 0;
}