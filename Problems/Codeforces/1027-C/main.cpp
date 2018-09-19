#include <bits/stdc++.h>
using namespace std;

using Long = long long;

const Long INF = 1LL << 60LL;
int main() {
    int T;
    scanf("%d", &T);
    while(T--) {
        int n;
        scanf("%d", &n);
        vector<Long> s(n), E;
        for(Long &t : s) scanf("%lld", &t);
        sort(s.begin(), s.end());
        for(int i = 1; i < n; i++) {
            if (s[i] == s[i-1]) {
                E.push_back(s[i]);
                i++;
            }
        }
        Long CN, CD;
        CN = 1, CD = 0;
        Long ans, anw;
        ans = anw = -1;
        for(int i = 1; i < (int)E.size(); i++) {
            Long A = E[i-1];
            Long B = E[i];
            Long P = (A+B)*2;
            P *= P;
            Long S = A*B;
            if (CN * S > CD * P) {
                CN = P;
                CD = S;
                ans = A;
                anw = B;
            }
        }
        printf("%lld %lld %lld %lld\n", ans, ans, anw, anw);
    }
    return 0;
}