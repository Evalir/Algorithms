#include <bits/stdc++.h>
using namespace std;
double d1,d2;

int main() {
    int t;
    scanf("%d", &t);
    while(t--) {
        scanf("%lf %lf", &d1, &d2);
        double lo = 0, hi = 1e9;
        double r1;
        for(int i = 0; i < 100; i++) {
            double C = (lo+hi) / 2.0; //fix C
            double l = 0, r = 1e9;
            double fixp;
            for(int j = 0; j < 100; j++) {
                double A = (l+r) / 2.0;
                double AToC = sqrt((d2+d1)*(d2+d1) + (C-A)*(C-A));
                double AtoB = sqrt((-d1)*(-d1) + (A*A));
                //cerr << "chk2 l" << l << " h " << r << " A " << A << " AtoC " << AToC << " AtoB" << AtoB << endl;
                if (AtoB > AToC) {
                    r = A;
                    fixp = AToC;
                }
                else {
                    l = A;
                }
            }
            double CtoB = sqrt(d2*d2 + C*C);
            //cerr << "chck1 " << lo << " hi " << hi << " C " << C << endl;
            if (CtoB > fixp) {
                r1 = fixp;
                hi = C;
            }
            else {
                lo = C;
            }
        }
        double ans = (sqrt(3.00)/4.00) * (r1*r1);
        printf("%.12lf\n", ans);
    }

}