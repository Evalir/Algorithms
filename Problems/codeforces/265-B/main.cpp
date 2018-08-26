#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    int n;
    cin >> n;
    vector<int> s(n);
    int dis = 0;
    ll ans = 0;
    for(int &t : s) cin >> t;
    for(int i = 0; i < n; i++) {
        if (i == n-1) {
            ans += abs(s[i]-dis);
            ans++;
        }
        else {
            ans += abs(s[i]-dis);
            dis += abs(s[i]-dis);
            ans++;
            if (s[i+1] < s[i]) {
                ans += abs(s[i+1]-dis);
                dis -= abs(s[i+1]-dis);
                ans++;
            }
            else ans++;
        }
    }
    cout << ans << endl;
    return 0;
}