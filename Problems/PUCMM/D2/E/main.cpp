#include <bits/stdc++.h>
using namespace std;
using pii = pair<int,int>;
// klk toy comiendo aguantense
int main() {
    int n;
    cin >> n;
    vector<pii> p;
    for(int i = 0; i < n; i++) {
        pii k;
        cin >> k.first >> k.second;
        p.push_back(k);
    }
    int ans = 0;
    for(int i = 0; i <= 24; i++) {
        int cnt = 0;
        for(int j = 0; j < n; j++) {
            if (p[j].first <= i && i < p[j].second) {
                cnt++;
            }
        }
        ans = max(ans, cnt);
    }
    cout << ans << endl;
    return 0;
}