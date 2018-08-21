#include <iostream>
using namespace std;
using ll = long long;

int main() {
    int t;
    cin >> t;
    while(t--) {
        ll n, x;
        cin >> n >> x;
        int a = false;
        for(int i = 0; i < n; i++) {
            int k;
            cin >> k;
            if (k >= x) a = true;
        }
        if (a) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}