#include <cstdio>
#include <cmath>
using namespace std;

int main() {
    double d,a,b;
    while(scanf("%lf %lf %lf", &d,&a,&b) == 3) {
        if (a <= b) {
            printf("impossivel\n");
        }
        else {
            double res = (d/a) + b/a;
            printf("%.2lf\n", res);
        }
    }
}
