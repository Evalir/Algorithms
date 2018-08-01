#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <numeric>
using namespace std;

int main() {
    int n;
    cin >> n;
    while(n--) {
        string a, s, b, e, r;
        cin >> a >> s >> b >> e >> r;
        bool ok[4];
        if (a.find("machula") != -1) ok[0] = true;
        if (b.find ("machula") != -1) ok[1] = true;
        if (r.find ("machula") != -1) ok[2] = true;
        if (ok[0]) {
            long long k = atoi(b);
            long long z = atoi(r);
            cout << abs(z-k) << " + " << abs(k) << " = " << z << "\n";
        }
        if (ok[1]) {
            long long k = atoi(a);
            long long z = atoi(r);
            cout << k << " + " << abs(z-k) << " = " << z << "\n";
        }
        if (ok[2]) {
            long long k = atoi(a);
            long long z = atoi(b);
            cout << k << " + " << z << " = " << k+z << "\n";
        }
    }
    return 0;
}