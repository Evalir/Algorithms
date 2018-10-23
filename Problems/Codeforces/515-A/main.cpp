#include <bits/stdc++.h>
using namespace std;
using Long = long long;
int main() {
    int n,m,s;
    scanf("%d%d%d", &n, &m, &s);
    Long k = abs(n) + abs(m);
    if (s < k) puts("NO");
    else if (abs(k-s) % 2 == 0) puts("YES");
    else puts("NO");
    return 0;
}