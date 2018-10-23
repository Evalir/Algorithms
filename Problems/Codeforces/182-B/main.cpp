#include <bits/stdc++.h>
using namespace std;
using Long = long long;
int main() {
    int d,n;
    scanf("%d\n%d", &d,&n);
    Long ans = 0;
    for(int i = 0; i < n-1; i++) {
        int x;
        scanf("%d", &x);
        ans += d - x;
    }
    printf("%lld\n",ans);
    return 0;
}