#include <iostream>
using namespace std;
using ll = long long;

int main() {
    int t;
    cin >> t;
    while(t--) {
        ll x, y;
        cin >> x >> y;
        if (x == y || abs(x-y) == 1) {
            cout << "Ok" << endl;
        }
        else {
            ll a = min(x,y);
            ll b = max(x,y);
            if (abs(a-b) % 2 ==0) {
                cout << b - (abs(a-b) / 2) << ' ' << a + (abs(a-b) / 2) << endl;
            }
            else {
                cout << b - (abs(a-b) / 2) - 1 << ' ' << a + (abs(a-b) / 2) + 1 << endl;
            }
        }
    }
    return 0;
}