#include <bits/stdc++.h>
using namespace std;
using Long = long long;
int main() {
    int t;
    cin >> t;
    while(t--) {
        Long n,m,k;
        cin >> n >> m >> k;
        if (abs(n) == abs(m)) {
            if (k < n) {
                cout << -1 << endl;
            }
            else if (k == n) {
                cout << n << endl;
            }
            else if (k % n == 1) {
                cout << n-1 << endl;
            }
            else if (abs(n-k) % 2 == 1) {
                cout << n-1 << endl;
            }
            else {
                cout << n << endl;
            }
        }
        else {
            Long stepsn = min(n,m) + (abs(n-m));
            if (stepsn > k) {
                cout << -1 << endl;
            }
            else {
                if (stepsn == k) {
                    cout << min(n,m) << endl;
                }
                else if (abs(stepsn-k) % 2 == 1) {
                    cout << min(n,m) - 1LL << endl;
                }
                else if (abs(stepsn-k) % 2 == 0) {

                }
            }
        }
    }
    return 0;
}