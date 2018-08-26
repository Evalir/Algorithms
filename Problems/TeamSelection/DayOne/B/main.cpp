#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;
using ll = long long;

int main() {
    ll n, t;
    cin >> n >> t;
    vector<ll> s(n), z;
    for(ll &a : s) cin >> a;
    z = s;
    reverse(z.begin(), z.end());
    pair<ll,ll> x, y;
    x = {t,0};
    y = {t,0};
    for(int i = 0; i < n; i++) {
        if (x.first > 0) {
            x.second++;
            x.first -= s[i];
        }
        if (y.first > 0) {
            y.second++;
            y.first -= z[i];
        }
    }

    if (x.second > y.second) {
        cout << "Yan" << endl;
    }
    else if (x.second < y.second) {
        cout << "Nathan" << endl;
    }
    else if (x.second == y.second) {
        cout << "Empate" << endl;
    }
    return 0;
}