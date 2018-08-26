#include <iostream>
#include <cstdio>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;
#define PI 3.1415926536

int main() {
    int n;
    scanf("%d", &n);
    double ans = 0.00;
    vector<double> s(n);
    for(double &t : s) scanf("%lf", &t);
    sort(s.rbegin(), s.rend());
    for(int i = 0 ; i < n; i++) {
        if (i & 1)
            ans += s[i]*s[i]*-1;
        else
            ans += s[i]*s[i];
    }
    printf("%.10lf", ans*PI);
    return 0;
}