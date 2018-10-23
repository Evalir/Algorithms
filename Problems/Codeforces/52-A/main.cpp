#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a = 0, b = 0, c = 0;
    for(int i = 0; i < n; i++) {
        int x;
        cin >> x;
        if (x == 1) a++;
        if (x == 2) b++;
        if (x == 3) c++;
    }
    if (a >= b && a >= c) cout << b + c << endl;
    else if (b >= a && b >= c) cout << a + c << endl;
    else if (c >= a && c >= b) cout << a + b << endl;
    return 0;
}