#include <bits/stdc++.h>
using namespace std;
vector<pair<int,int> > oc;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    unsigned int n, m, q;
    cin >> n >> m >> q;
    string s,t;
    cin >> s >> t;
    for(int i = 0; i < n; i++) {
        if (i + (m-1) < n) {
            if (s.substr(i,m) == t) {
                pair<int,int> k = {i, i+(m-1)};
                oc.emplace_back(k);
            }
        }
    }
    while(q--) {
        int l, r;
        cin >> l >> r;
        l--,r--;
        int ans = 0;
        int cnt = 0;
        for(auto i : oc) {
            if (i.first >= l && i.second <= r)
                ans++;
        }
        cout << ans << "\n";
    }
    return 0;
}