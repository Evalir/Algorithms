#include <cstdio>
#include <cmath>
#include <vector>
using namespace std;

int main() {
    double n;
    vector<double> sqnums;
    while (scanf("%lf", &n) != EOF) {
        sqnums.push_back(n);
    }    
    
    for(int i = sqnums.size()-1; i >= 0; i--) {
        printf("%.4lf\n", sqrt(sqnums[i]));
    }
    return 0;
}
