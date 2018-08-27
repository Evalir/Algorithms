#include <bits/stdc++.h>
using namespace std;
using ll = long long;
ll n, x, y;

int main() {
    int t;
    cin >> t;
    while(t--) {
        cin >> n >> x >> y;
        vector<ll> s(n);
        bool ok = false;
        for(auto &a : s) cin >> a;
        for(int i = 0; i < n; i++) {
            if (s[i] == x || s[i] == y || -s[i] == x || -s[i] == y) {
                ok = true;
                break;
            }
        }
        if (ok) {
            cout << 1 << '\n';
            continue;
        }
        bool cantie = false;
        for(int i = 0; i < n; i++) {
            bool fp = false;
            for(int j = 0; j < n; j++) {
                if(s[i] + s[j] == x || s[i] + s[j] == y || s[i] - s[j] == x || s[i] - s[j] == y) {
                    fp = true;
                }
            }
            if (!fp) {
                cantie = true;
                break;
            }
            fp = false;
            for(int j = 0; j < n; j++) {
                if(-s[i] + s[j] == x || -s[i] + s[j] == y || -s[i] - s[j] == x || -s[i] - s[j] == y) {
                    fp = true;
                }
            }
            if (!fp) {
                cantie = true;
                break;
            }

        }
        if (!cantie) {
            cout << 2 << '\n';
            continue;
        }
        else {
            cout << 0 << '\n';
            continue;
        }
    }
    return 0;
}
/*
1
2 8 -10
5 5
 *
 * */