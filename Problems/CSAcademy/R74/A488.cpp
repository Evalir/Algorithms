#include <bits/stdc++.h>
using namespace std;

int main() {
    long a;
    cin >> a;
    long ans = 1e9;
    if (abs(a) < 8) {
        cout << abs(8 - a) << endl;
        return 0;
    }
    if (abs(a) == 8) {
        cout << 10 << endl;
        return 0;
    }
    else if (abs(a) >= 9) {
        int ld = a % 10;
        if (ld < 8) {
            if(a > 0)
                cout << abs(8 - ld) << endl;
            else
                cout << abs(a) + abs(8-ld) << endl;
            return 0;
        }
        else if (a > 0){
            int t = a % 100;
            long c = 10;
            bool f = 0;
            while (true) {
                t += c;   
                int t1 = t % 10;
                int t2 = (t/10) % 10;   
                if (t1 == 8 || t2 == 8) {
                    ans = min(ans, c);
                    f = 1;
                }
                t = a % 100;
                c--;
                if (c == 0)
                    break;
            }
            if (f) {
                cout << ans << endl;
                return 0;
            }
        }
        else if (a <= 0) {
            cout << abs(a) + 8 << endl;
            return 0;
        }
    }
    
    return 0;
}
