#include <bits/stdc++.h>
using namespace std;
using Long = long long;
const Long MOD = 1000000007LL;

string solve() {
    int n;
    cin >> n;
    string a, b;
    cin >> a >> b;
    Long ans = 1;
    for(int i = 0; i < n; i++) {
        if (a[i]== '1' && b[i] == '0') {
            return "IMPOSSIBLE";
        }
        else {
            if (a[i] == '1' && b[i] == '1') {
                ans <<= 1;
                ans %= MOD;
                if (ans < 0) ans += MOD;
            }
            else if (a[i] == '0' && b[i] == '1') continue;
            else if (a[i] == '0' && b[i] == '0') continue;
        }
    }
    ans %= MOD;
    if (ans < 0) ans += MOD;
    return to_string(ans);
}
int main() {
    int t;
    cin >> t;
    while(t--) {
        cout << solve() << endl;
    }
    return 0;
}