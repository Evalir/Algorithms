#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int d;
        cin >> d;
        string s;
        cin >> s;
        double att = 0;
        for(auto &c : s) if (c == 'P') att++;
        if (s.size() < 5) {
            (1.00*att / (1.00 * d) * 100 >= 75.00) ? puts("0") : puts("-1");
            continue;
        }
        int cnt = 0;
        for(int i = 2; i < d - 2; i++) {
            bool b = (s[i - 2] == 'P' || s[i - 1] == 'P');
            bool a = (s[i + 2] == 'P' || s[i + 1] == 'P');
            if (a && b) cnt++;
        }
        // got 75% on first try
        if (1.00*att / (1.00 * d) * 100 >= 75.00) {
            cout << 0 << "\n";
            continue;
        }
        int need = 0;
        while ((1.00*att + need) / (1.00 * d) * 100 < 75.00) {
            need++;
        }


    }
    return 0;
}