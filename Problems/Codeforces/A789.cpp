#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
    long long n, k;
    cin >> n >> k;
    
    long long ans = 0;
    for(int i = 0; i < n; i++) {
        long long x;
        cin >> x;
        ans += ceil(1.00 * x / k*1LL);
    }
    ans = ceil((1.00* ans/2))*1LL;
    cout << ans << endl;
    return 0;
    
}
