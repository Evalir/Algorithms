#include <bits/stdc++.h>
using namespace std;
using Long = long long;
using pii = pair<int,int>;

int main() {
    Long n;
    cin >> n;
    if ((n-3) % 3 == 0) {
        cout << n-2 << ' ' << 1 << ' ' << 1 << endl;
    } else {
        cout << n-3 << ' ' << 2 << ' ' << 1 << endl;
    }
    return 0;
    return 0;
}