#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;
using pii = pair<int,int>;

int main() {
    int p,q,l,r;
    cin >> p >> q >> l >> r;
    vector<pii> s(p),z(q);
    for(pii &t : s) cin >> t.first >> t.second;
    for(pii &t : z) cin >> t.first >> t.second;
    int ans = 0;
    for(int i = l; i <= r; i++) {
        for(auto &seg : z) {
            int le = seg.first + i;
            int ri = seg.second + i;
            bool ok = false;
            for(auto &x : s) {
                if ((le < x.first && ri < x.first) || (le > x.second && ri > x.second))
                    continue;
                else {
                    ans++;
                    ok = true;
                }
                if (ok)
                    break;
            }
            if (ok)
                break;
        }
    }
    cout << ans << endl;
    return 0;
}