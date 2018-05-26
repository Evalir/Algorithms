#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;
    while(T--) {
        int n;
        cin >> n;
        bool zno = false;
        while(n > 0) {
            int k = n % 10;
            if (k == 0 && zno)
                cout << k;
            if (k != 0) {
                zno = true;
                cout << k;
            }
            n /= 10;
        }
        cout << endl;
    }

    return 0;
}
