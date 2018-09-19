#include <bits/stdc++.h>
using namespace std;

int main() {
    double N, M, K;
    scanf("%lf%lf%lf", &N, &M, &K);
    double ans = 0;
    ans = (abs((M-(K-1.00)))/abs(((N+M)-(K-1.00)))*abs((1.00/K))) + abs(((1.00/K))*(K-1));
    printf("%.15lf\n", abs(ans));
    return 0;
}