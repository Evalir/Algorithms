#include <bits/stdc++.h>
using namespace std;
using Long = long long;
using pii = pair<int,int>;
vector<int> Links(100010, -1);
int main() {
    int n, m;
    scanf("%d%d", &n, &m);
    vector<int> A(n),B(m);
    for(auto &t : A) scanf("%d", &t);
    for(auto &t : B) scanf("%d", &t);
    for(int i = 0; i < n; i++) {
        int lo = 0, hi = m, res = -1;
        while (lo <= hi) {
            int md = (lo + hi) / 2;
            cout << "lo " << lo << " hi " << hi << " md " << md << endl;
            if (abs(A[i] - B[md])) {
                hi = md - 1;
                res = md;
            } else {
                lo = md + 1;
            }
        }
        if (Links[res] != -1) {
            if (abs(Links[res] - B[res]) < abs(A[i] - B[res])) continue;
            else Links[res] = i;
        } else {
            Links[res] = i;
        }
    }
    Long ans = 0LL;
    for(int i = 0; i < m; i++) {
        if(Links[i] != - 1) {
            ans += abs(B[i] - A[Links[i]]);
        }
    }
    cout << ans << endl;
    return 0;
}