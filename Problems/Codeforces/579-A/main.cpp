#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n;
    cin >> n;
    int ans = 0;
    while(n) {
        ans += n & 1;
        n /= 2;
    }
    cout << ans << endl;
    return 0;
}