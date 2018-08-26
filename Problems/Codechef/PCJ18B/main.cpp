#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

using ull = unsigned long long;

int main() {
    int T;
    cin >> T;
    while(T--) {
        ull a;
        cin >> a;
        ull ans = 0;
        for(int i = 1; i <= a; i += 2) {
            ans += (a-i+1)*(a-i+1);
        }
        cout << ans << '\n';
    }
    return 0;
}