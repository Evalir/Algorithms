#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;
using ll = long long;

int main() {
    int n, m;
    cin >> n >> m;
    vector<ll> s(n);
    for(ll &t : s) cin >> t;
    vector<ll> z(n);
    for(int i = 0; i < n; i++) {
        if (i) {
            z[i] = z[i-1] + s[i];
        }
        else
            z[i] = s[i];
    }
    while(m--) {
        int l,r;
        cin >> l >> r;
        l--,r--;
        if (l > 0) {
            if ((z[r]-z[l-1]) % 2 == 0) {
                cout << "Sim" << endl;
            }
            else {
                cout << "Nao" << endl;
            }
        }
        else {
            if (z[r] % 2 == 0) {
                cout << "Sim" << endl;
            }
            else {
                cout << "Nao" << endl;
            }
        }
    }

    return 0;
}