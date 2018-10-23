#include <bits/stdc++.h>
using namespace std;
using Long = long long;
using pll = pair<Long,Long>;

int main() {
    int n;
    cin >> n;
    vector<pll> V(n);
    for(auto &t : V) cin >> t.first >> t.second;
    Long ans = 0;
    for(int i = 0; i < n; i++) {
        ans = max(ans, V[i].second + V[i].first);
    }
    cout << ans << endl;

    return 0;
}