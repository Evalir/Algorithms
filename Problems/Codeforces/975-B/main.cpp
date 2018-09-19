#include <bits/stdc++.h>
using namespace std;
using Long = long long;
int main() {
    vector<Long> S(14);
    for(auto &t : S) cin >> t;
    Long ans = 0;
    for(int i = 0; i < 14; i++) {
        if (S[i] <= 0) continue;
        vector<Long> T = S;
        Long k = T[i], cur = 0, L = k/14;
        T[i] = 0;
        k %= 14;
        for(int j = 0; j < 14; j++) T[j] += L;
        for(int j = i + 1; k > 0; j++, k--) {
            j %= 14;
            T[j]++;
        }
        for(int j = 0; j < 14; j++)
            if (T[j] % 2 == 0) cur += T[j];
        ans = max(ans, cur);
    }
    cout << ans << endl;

    return 0;
}