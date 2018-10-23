#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    char buf[110];
    scanf("%s", buf);
    s = buf;
    int c1, c0;
    c1 = c0 = 0;
    for(int i = 0; i < s.size(); i++) {
        if (s[i] == '1') c1++;
        if (s[i] == '0' && c1) c0++;
    }
    if (c1 && c0 >= 6) puts("YES");
    else puts("NO");
    return 0;
}