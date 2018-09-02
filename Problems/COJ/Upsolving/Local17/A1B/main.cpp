#include <bits/stdc++.h>
using namespace std;


int main() {
    int t;
    scanf("%d", &t);
    while(t--) {
        double d1,d2;
        scanf("%lf %lf", &d1, &d2);
        double lo = 0.0, hi = 1e9 + 10.0;
        double len;
        for(int i = 0; i < 100; i++) {
            double clen = (lo+hi) / 2.0;
            double CY = sqrt((clen*clen) - (d2*d2));
            double AY = sqrt((clen*clen) - (d1*d1));
            double AToC = sqrt((d2-(-d1))*(d2-(-d1)) + (CY-AY)*(CY-AY));
            if (AToC < clen) {
                hi = clen;
                len = clen;
            }
            else {
                lo = clen;
            }
        }
        double ans = (sqrt(3.0)/4.0) * (len*len);
        printf("%.10lf\n", ans);
    }
    return 0;
}