#include <bits/stdc++.h>
using namespace std;

int n;
double s[100010], a;
bool check(double x) {
    double acc = 0;
    for(int i = 0; i < n; i++) {
        if (s[i] > x) {
            acc += s[i] - x;
        }
    }
    if (acc >= a) return true;
    return false;
}

int main() {
    while(cin >> n >> a && n != 0 && a != 0) {
        for(int i = 0; i < n; i++) {
            cin >> s[i];
            s[i] *= 1.00;
        }
        long long ans = accumulate(s, s+n, 0LL);
        long long aa = (long long)a;
        if (ans == aa || aa == 0) {
            cout << ":D" << "\n";
            continue;
        }
        if (aa > ans) {
            cout << "-.-" << endl;
            continue;
        }
        double lo, hi, res;
        lo = 0, hi = 1e9;
        while(fabs(hi-lo) > 1e-9) {
            double mid = (hi+lo) / 2.0;
            //cerr << hi << ' ' << lo << ' ' << mid << endl;
            if (check(mid)) {
                lo = mid;
                res = mid;
            }
            else {
                hi = mid;
            }
        }
        printf("%.4lf\n", res);
    }
    return 0;
}