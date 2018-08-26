#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <string>
using namespace std;
using ll = long long;
int main() {
    int n;
    cin >> n;
    ll SA, SG;
    SA = SG = 0;
    vector<ll> s(n), z(n);
    for(int i = 0 ; i<  n; i++) {
        ll x,y;
        cin >> x >> y;
        s[i] = x, z[i] = y;
    }
    string res = "";
    for(int i = 0; i < n; i++) {
        if(abs((SA+s[i]) - SG) <= 500) {
            SA += s[i];
            res += 'A';
        }
        else if (abs(SA-(SG+z[i])) <= 500) {
            SG += z[i];
            res += 'G';
        }
        else {
            cout << -1 << endl;
            return 0;
        }
    }
    cout << res << endl;
    return 0;
}