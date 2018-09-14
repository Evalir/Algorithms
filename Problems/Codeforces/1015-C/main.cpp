#include <bits/stdc++.h>
using namespace std;
using Long = long long;
using pll = pair<Long,Long>;

bool comp1(pll f, pll s) {
    return f.first-f.second > s.first-s.second;
}

int main() {
    Long n,m;
    cin >> n >> m;
    vector<pll> s(n);
    for(auto &t : s) cin >> t.first >> t.second;
    sort(s.begin(), s.end(), comp1);
    Long ans = 0, cnt = 0;
    for(auto &t : s) ans += t.first;
    for(int i = 0; i < n; i++) {
        if (ans <= m) {
            cout << i << endl;
            return 0;
        }
        ans -= s[i].first - s[i].second;
        cnt++;
    }
    if (ans > m) cout << -1 << endl;
    else cout << n << endl;
    return 0;
}