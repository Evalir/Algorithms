#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <set>
#include <queue>
#include <cmath>
using namespace std;

long long factorial(long long n) {
    if (n == 0 || n == 1)
        return 1;
    else
        return n * factorial(n-1);
}

int main() {
    long long a, b;
    cin >> a >> b;
    long long minf = min(a,b);
    long long ans = factorial(minf);
    cout << ans << endl;
    return 0;
    
}
