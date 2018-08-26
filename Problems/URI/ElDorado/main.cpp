#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> s(n);
    for(int &t : s) cin >> t;
    int idx = 0;
    bool ok = false;
    for(int i = 1; i < n; i++) {
        if (s[i-1] > s[i]) {
            idx = i-1;
            ok = true;
            break;
        }
    }
    if (!ok) {
        cout << 0 << endl;
        return 0;
    }
    else {
        for (int i = 0; i < idx; i++) {
            if (s[i] > s[i + 1]) {
                cout << -1 << endl;
                return 0;
            }
        }

        for (int i = idx + 1; (i % n) != idx; i++) {
            if (s[i % n] > s[(i + 1) % n]) {
                cout << -1 << endl;
                return 0;
            }
        }
        cout << n - (idx + 1) << endl;
    }
    return 0;
}