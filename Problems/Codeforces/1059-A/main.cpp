#include <bits/stdc++.h>
using namespace std;
using Long = long long;
int main() {
    Long n,l,a;
    cin >> n >> l >> a;
    vector<Long> L(n),T(n);
    for(int i = 0; i < n; i++) cin >> L[i] >> T[i];
    Long curr = 0;
    Long ans = 0;
    for(int i = 0; i < n; i++) {
        if (abs(L[i]-curr) >= a) ans++;
        if (curr < L[i]) curr = L[i];
        curr += T[i];
    }
    cout << curr << endl;
    ans += ((l-curr)/a);
    cout << ans << endl;
    return 0;
}