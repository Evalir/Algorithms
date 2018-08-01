#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <set>
#include <string.h>
using namespace std;
using ll = long long;
int main() {
    int n;
    cin >> n;
    vector<ll> h(n);
    for(ll &t : h) cin >> t;
    ll rps = 0;
    vector<ll> ans(n);
    for(int i = n-1; i >= 0; i--) {
        ans[i] = max(0LL, rps+1-h[i]);
        rps = max(rps, h[i]);

    }
    for(int i = 0; i < n; i++)
        cout << ans[i] << ' ';
    puts(" ");
    return 0;
}