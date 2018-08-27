#include <bits/stdc++.h>
using namespace std;


int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<int> v(n);
        for(int &t : v) cin >> t;
        sort(v.begin(), v.end());
        int ans = 1 << 30;
        for(int i = 0; i < n; i++) {
            if (i)
                ans = min(ans, v[i]-(v[i-1]));
        }
        cout << ans << '\n';
    }
    return 0;
}