#include <bits/stdc++.h>
using namespace std;
using Long = long long;

int a[200010];
int b[200010];
int main() {
    int n, m;
    scanf("%d%d", &n, &m);
    for(int i = 0; i < n; i++) scanf("%d", &a[i]);
    for(int i = 0; i < n; i++) {
        if (!i) b[i] = a[i];
        else b[i] = a[i] + b[i - 1];
    }
    while(m--) {
        int l, r;
        scanf("%d%d", &l, &r);
        l--,r--;
        int tot = b[r];
        if (l) tot -= b[l - 1];
        (!tot) ? puts("1") : puts("0");
    }
    return 0;
}