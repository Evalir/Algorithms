#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    int f[30];
    memset(f,0,sizeof(f));
    for(int i = 0; i < n; i++)
        f[s[i]-'a']++;
    int ans = 0;
    for(int i = 0; i <= 27; i++)
        ans = max(ans,f[i]);
    if (n == 1) {
        puts("YES");
        return 0;
    }
    ans > 1 ? puts("YES") : puts("NO");
    return 0;
}
