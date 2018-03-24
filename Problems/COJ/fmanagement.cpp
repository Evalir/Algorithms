#include <cstdio>

int main() {
    double sum = 0;
    for(int i = 0; i < 12; i++) {
        double s;
        scanf("%lf", &s);
        sum += s;
    }
    
    printf("$%.2lf\n", sum/12);
    return 0;
    
}
