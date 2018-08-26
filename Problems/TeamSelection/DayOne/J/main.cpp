#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
#include <numeric>

using namespace std;

int main() {
    int n;
    cin >> n;
    unsigned long long ans = 0;
    vector<unsigned long long > a(n);
    for(unsigned long long &t : a) cin >> t;
    unsigned long long cnt = 0;
    for(int i = 0; i < n; i++) {
        cnt += a[i];
    }
    for(int i = 0; i < n; i++) {
        cnt -= a[i];
        ans += a[i] * cnt;
    }
    cout << ans << endl;
    return 0;
}