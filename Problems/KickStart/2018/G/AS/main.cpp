#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long Long;
typedef pair<Long,Long> pll;
Long freq[300010];
int main() {
    freopen("A-large.in", "r", stdin);
    freopen("output.txt", "w", stdout);
    int T;
    scanf("%d", &T);
    int cas = 0;
    while(T--) {
        ++cas;
        int n;
        scanf("%d", &n);
        vector<Long> V(n);
        memset(freq,0,sizeof(freq));
        Long ans = 0;
        for(auto &t : V) scanf("%lld", &t);
        for(int i = 0; i < n; i++) {
            for(int j = i + 1; j < n; j++) {
                Long a = V[i], b = V[j];
                if (a == 0 && b == 0) {
                    ans += i;
                    continue;
                }
                set<Long> WANTED;
                if (a > b) swap(a, b);
                if (1LL * a * b <= 200000) WANTED.insert(a * b);
                if (a != 0 && b % a == 0) WANTED.insert(b / a);
                if (b == 0 || a == 0) WANTED.insert(0);
                for (Long w : WANTED) {
                    ans += freq[w]*1LL;
                }
            }
            freq[V[i]]++;
        }
        printf("Case #%d: %lld\n", cas, ans);
    }
    return 0;
}