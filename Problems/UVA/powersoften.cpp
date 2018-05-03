#include <cstdio>
#include <set>
#include <cmath>
typedef unsigned long long ull;
using namespace std;

int main() {
    set<ull> nums;
    nums.insert(1);
    for(ull i = 1; i <= 100000; i++) {
        nums.insert(1 + ((i)*(i+1))/2);
    }    
    int N;
    scanf("%d", &N);
    while(N--) {
        int Q;
        scanf("%d", &Q);
        if (nums.count(Q) == 0)
            printf("%d ", 0);
        else
            printf("%d ", 1);
    }
    
    return 0;
}
