#include <vector>
#include <algorithm>
#include <cmath>
#include <iostream>
using namespace std;

int main() {
    unsigned long long n;
    ios_base::sync_with_stdio (false);
    while(cin >> n) {
        int ans = 0;
        while (n) {
            n=n&(n-1);
            ans++;
        }
        cout << ans << endl;
    }
    return 0;
}
