#include <cstdio>
#include <cmath>

long long calculateFactorial(long long N) {
    if (N < 0) return 0;
    else if (N == 1 || N == 0) return 1;
    else
        return N * calculateFactorial(N-1);
}

int main() {
    long long N;
    scanf("%ld", &N);
    if (N < 0) {
        printf(" Mi loco klk contigo");
        return 0;
    }
    long long res = calculateFactorial(N);
    printf("%ld\n", res);

    return 0;
} 