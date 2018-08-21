#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>
using namespace std;

using Long = unsigned long long;

int main() {
    int n;
    cin >> n;
    string a,b;
    cin >> a >> b;
    Long val0 = 0, ones = 0, val1 = 0, zerosw = 0;
    for(int i = 0; i < n; i++) {
        if (a[i] == '0' && b[i] == '1') zerosw++;
        if (a[i] == '0' && b[i] == '0') val0++;
        if (a[i] == '1') ones++;
        if (a[i] == '1' && b[i] == '0') val1++;
    }

    Long ans = (val0*ones) + (val1*zerosw);
    cout << ans << endl;
    return 0;
}