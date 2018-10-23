#include <bits/stdc++.h>
using namespace std;
using Long = long long;
int l,r;
set<Long> S;
void DaftPunk(Long num) {
    if (num > r) return;
    S.insert(num * 10LL + 4LL);
    S.insert(num * 10LL + 7LL);
    DaftPunk(num * 10LL + 4LL);
    DaftPunk(num * 10LL + 7LL);
}
int main() {
    scanf("%d%d", &l, &r);
    S.insert(4LL);
    S.insert(7LL);
    DaftPunk(4LL);
    DaftPunk(7LL);
    Long ans = 0;
    vector<Long> V(S.begin(), S.end());
    auto st = lower_bound(V.begin(), V.end(),l) - V.begin();
    auto en = lower_bound(V.begin(), V.end(),r) - V.begin();
    Long llu = l;
    for(int i = st; i <= en; i++) {
        ans += V[i]*(min(r*1LL,V[i])-llu + 1LL);
        llu = V[i] + 1LL;
    }
    cout << ans << endl;
    return 0;
}