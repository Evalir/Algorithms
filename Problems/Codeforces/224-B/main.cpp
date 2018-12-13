#include <bits/stdc++.h>
using namespace std;
using pii = pair<int,int>;
int main() {
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for(auto &t : a) cin >> t;
    map<int,int> F;
    int cnt = 0;
    pii ans = {0, 1 << 30};
    int l = 0, r = 0;
    for(; r < n; r++) {
        if (++F[a[r]] == 1) {
            cnt++;
            if (cnt == k) {
                cout << l + 1 << " " << r + 1 << endl;;
                return 0;
            }
        }
        if (r > l && a[l] == a[r]) {
            F[a[l]]--;
            l++;
            while(r > l && F[a[l]] > 1) {
                F[a[l]]--;
                l++;
            }
        }
    }
    cout << "-1 -1\n";
    return 0;
}