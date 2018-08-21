#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;
using Long = long long;
using pii = pair<int,int>;
int main() {
    int n;
    cin >> n;
    vector<pii> s(n);
    for(pii &t : s) cin >> t.first >> t.second;
    int ans = 0;
    for(int i = 0; i <= 24; i++) {
        int cnt = 0;
        for(pii &t : s) {
            if (t.first <= i && t.second > i)
                cnt++;
        }
        ans = max(ans,cnt);
    }
    cout << ans << endl;

    return 0;
}