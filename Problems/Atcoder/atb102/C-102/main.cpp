#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;
using ll = long long;
int n;
bool ch(int b, int last, vector<ll> &V) {
    ll ans = 0;
    for(int i = 0; i < n; i++) {

    }
    if (ans <= last)
        return true;
    return false;

}
int main() {
    cin >> n;
    vector<ll> V(n);
    for(ll &i : V)
        cin >> i;
    ll z = n*(n+1)/2;
    ll ps = 0;
    for(ll &i : V)
        ps += i;
    ll ans = (1e15);
    cerr << ans << endl;
    int lo = 0, hi = 1e6;
    while(lo <= hi) {
        int mid = lo + (hi-lo) / 2;
        bool chk = ch(mid, mid, V);
        if (chk) {
            hi = mid-1;
            ans = mid;
        }
        else {
             lo = mid + 1;
        }
    }

    cout << ans << endl;
    return 0;

}
