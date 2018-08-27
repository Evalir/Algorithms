#include <bits/stdc++.h>
using namespace std;

int main() {
    double a,b;
    scanf("%lf%lf", &a,&b);
    int n;
    scanf("%d", &n);
    double ans = 1e9+7;
    for(int i = 0; i < n; i++) {
        double x,y,v;
        scanf("%lf %lf %lf", &x,&y,&v);
        double dis = sqrt((x-a)*(x-a)+(y-b)*(y-b));
        ans = min(ans, dis/v);
    }
    printf("%.15lf\n", ans);
    return 0;
}