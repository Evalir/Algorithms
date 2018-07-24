#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;
using ll = long long;
int main() {
    int n;
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
    for(int i = 0; i < n; i++) {
        cerr << " with " << i <<  ' ' << abs(ps - ((i*n) + z)) << endl;
        ans = min(ans, abs(ps - ((i*n) + z)));
    }

    cout << ans << endl;
    return 0;

}
