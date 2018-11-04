#include <bits/stdc++.h>
using namespace std;
using Long = long long;
using pll = pair<Long,Long>;
bool comp1(pll a, pll b) {if (a.second != b.second) return a.second > b.second; return a.first > b.first;}
int main() {
    Long n;
    cin >> n;
    int m;
    cin >> m;
    vector<pll> V(m);
    for(auto &t : V) cin >> t.first >> t.second;
    sort(V.begin(), V.end(), comp1);
    Long ans = 0;
    for(auto t : V) {
        ans += min(n,t.first)*t.second;
        n -= min(n,t.first);
    }
    cout << ans << endl;
    return 0;
}