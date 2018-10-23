#include <bits/stdc++.h>
using namespace std;
int gcd(int a, int b) {
    return b == 0 ? a : gcd(b, a % b);
}
int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<int> s(n);
        for(auto &t : s) cin >> t;
        int g;
        for(int i = 0; i < n; i++) {
            if (!i) {
                g = gcd(s[i], s[i]);
            }
            else {
                g = gcd(g, s[i]);
            }
        }
        cout << g << ' ';
        int ans = 0;
        for(int i = 0; i < n; i++)
            ans += s[i]/g;
        cout << ans << endl;
    }
    return 0;
}