#include <bits/stdc++.h>
using namespace std;
int PR[3010], PL[3010];
char s[3010];
int main() {
    int n;
    cin >> n;
    cin >> s;
    memset(PR, 0, sizeof(PR));
    memset(PL, 0, sizeof(PL));
    int ans = n;
    for (int i = 0; i < n; i++) {
        if (s[i] == 'L') {
            for (int j = i; s[j] != 'R' && j >= 0; j--)
                PL[j] = i + 1;
        } else if (s[i] == 'R') {
            for (int j = i; s[j] != 'L' && j < n; j++) {
                PR[j] = i + 1;
            }
        }
    }
    for (int i = 0; i < n; i++) {
        if (PR[i] && PL[i]) {
            if (abs((i + 1) - PR[i]) != abs((i + 1) - PL[i])) {
                ans--;
            }
        } else if (PR[i] && !PL[i]) ans--;
        else if (!PR[i] && PL[i]) ans--;
    }
    cout << ans << endl;
    return 0;
}