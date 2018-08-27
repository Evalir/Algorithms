#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using pii = pair<int,int>;
using pll = pair<ll,ll>;

int main() {
    ll n, m;
    cin >> n >> m;
    vector<ll> s(n);
    for(ll &t : s) cin >> t;
    ll sum = 0;
    for(int i = 0; i < n; i++) {
        sum += s[i];
        cout << sum/m << ' ';
        sum -= (sum/m)*m;
    }
    return 0;
}