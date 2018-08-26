#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <string>
using namespace std;
using ll = long long;
using VL = vector<ll>;

int main() {
    int n,m;
    cin >> n >> m;
    vector<ll> s(n),z(m);
    ll x, y;
    for(int i = 0; i < n; i++) {
        cin >> s[i];
        if (!i)
            x = s[i];
        else
            x ^= s[i];
    }
    for(int i = 0; i < m; i++) {
        cin >> z[i];
        if (!i)
            y = z[i];
        else
            y ^= z[i];
    }
    if (x != y) {
        cout << "NO" << endl;
        return 0;
    }
    cout << "YES\n";
    vector<VL> f(n, VL(m));
    for(int i = 0; i < n-1; i++) f[i][m-1] = s[i];
    for(int i = 0; i < m-1; i++) f[n-1][i] = z[i];
    f[n-1][m-1] = x ^ (s[n-1]) ^ (z[m-1]);
    for(int i = 0 ; i < n; i++) {
        for (int j = 0; j < m; j++)
            cout << f[i][j] << ' ';
        cout << endl;
    }
    return 0;
}