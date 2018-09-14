#include <bits/stdc++.h>
using namespace std;
using Long = long long;
Long A[500000], B[500000];
Long gcd (Long a, Long b) {
    if (b == 0) return a;
    return gcd (b, a % b);
}
int main() {
    int n;
    scanf("%d", &n);
    Long a,b,g = -(1 << 30);
    for(int i = 0; i < n; i++)
        scanf("%lld %lld", &A[i], &B[i]);
    g = 1LL*A[0]*B[0];
    for(int i = 1; i < n; i++)
        g = gcd(g, 1LL*A[i]*B[i]);
    if (g == 1) {
        printf("-1\n");
        return 0;
    }
    g = max(gcd(g,A[0]), gcd(g, B[0]));
    for(Long i = 2; i*i <= g; i++) {
        if (g % i == 0) {
            printf("%lld\n", i);
            return 0;
        }
    }
    printf("%lld\n", g);
    return 0;
}