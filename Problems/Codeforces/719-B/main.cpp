#include <bits/stdc++.h>
using namespace std;

int main() {
    char buf[100010];
    string s;
    int n;
    scanf("%d", &n);
    scanf("%s", buf);
    s = buf;
    int a,b,c,d;
    a = b = c = d = 0;
    for(int i = 0; i < n; i++) {
        if ((i & 1) && s[i] == 'r') a++;
        if (!(i & 1) && s[i] == 'b') b++;
    }
    for(int i = 0; i < n; i++) {
        if ((i & 1) && s[i] == 'b') c++;
        if (!(i & 1) && s[i] == 'r') d++;
    }
    int ans = min(max(a,b), max(c,d));
    printf("%d\n", ans);
    return 0;
}