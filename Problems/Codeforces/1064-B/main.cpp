#include <bits/stdc++.h>
using namespace std;
using Long = long long;
int main() {
    int t;
    cin >> t;
    while(t--) {
        Long a;
        cin >> a;
        Long k;
        k = __builtin_popcountll(a);
        cout << (1LL << k) << endl;
    }
    return 0;
}