#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    ll n;
    cin >> n;
    vector<int> V(n);
    for(int &t : V) cin >> t;
    ll minn = *min_element(V.begin(), V.end()) * 1LL;
    //cerr << minn << endl;
    ll k, cnt;
    k = cnt = 0;
    for(int i = 0; i < 2*(int)V.size(); i++) {
        if (V[i%n]-minn > 0) {
            cnt++;
            k = max(k, cnt);
        }
        else
            cnt = 0;
    }
    //cerr << k << endl;
    ll ans = minn*n + k;
    cout << ans << endl;
    return 0;

}