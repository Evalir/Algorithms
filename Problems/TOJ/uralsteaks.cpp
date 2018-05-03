#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    n *= 2;
    int ans = 0;
    n % k == 0 ? ans = n / k : ans = (n / k) + 1;
    if (n <= k)
        ans = 2;
    cout << ans << endl; 
    return 0;
}
