#include <cstdio>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;
using Long = long long;
int main() {
    int n;
    scanf("%d", &n);
    vector<Long> s(n);
    for(Long &t : s) scanf("%d", &t);
    int ans = 0;
    int cnt = 0;
    for(int i = 0 ; i < n; i++) {
        if (i < 2) {
            cnt++;
            ans = max(ans,cnt);
        }
        else {
            if (s[i-1]+s[i-2] == s[i] && cnt >= 3) {
                cnt++;
                ans = max(ans,cnt);
            }
            else if (s[i-1] + s[i - 2] == s[i] && cnt < 3) {
                cnt = 3;
                ans = max(ans,cnt);
            }
            else {
                ans = max(ans,cnt);
                cnt = 1;
            }
        }
    }
    printf("%d\n", ans);
    return 0;
}