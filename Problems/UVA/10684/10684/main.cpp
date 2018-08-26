#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    int n;
    cout << stoi("123") << endl;
    while(cin >> n && n) {
        ll ans,cnt;
        ans = cnt = 0;
        for(int i = 0; i < n; i++) {
            ll x;
            scanf("%lld", &x);
            cnt += x;
            if (cnt < 0)
                cnt = 0;
            ans = max(ans,cnt);
        }
        if (ans > 0) cout << "The maximum winning streak is " << ans << ".\n";
        else cout << "Losing streak." << endl;
    }
}
