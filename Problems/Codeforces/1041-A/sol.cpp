#include <bits/stdc++.h>
using namespace std;
using Long = long long;
int main() {
    int n;
    cin >> n;
    vector<Long> V(n);
    for(auto &t : V) cin >> t;
    Long mine = *min_element(V.begin(), V.end());
    mine--;
    Long maxe = *max_element(V.begin(), V.end());
    Long ans = (maxe-mine);
    ans -= n;
    cout << ans << endl;
    return 0;
}
