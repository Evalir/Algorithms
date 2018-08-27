#include <bits/stdc++.h>
using namespace std;
#define GOOD 0
#define INVALID 1
#define WEAK 2
int main() {
    int t;
    cin >> t;
    while(t--) {
        int n, m;
        cin >> n >> m;
        string s, x;
        int out = GOOD;
        bool det = false;
        for(int i = 0; i < n; i++) {
            cin >> s >> x;
                if (s == "correct") {
                    for(int j = 0; j < x.size(); j++) {
                        if (x[j] == '0') {
                            det = true;
                            out = INVALID;
                        }
                    }
                }
                if (s == "wrong") {
                    bool sz = false;
                    for(int j = 0; j < x.size(); j++) {
                        if (x[j] == '0') sz = true;
                    }
                    if (!sz && out != INVALID) {
                        det = true;
                        out = WEAK;
                    }
                }
        }
        if (out == GOOD)
            cout << "FINE\n";
        else if (out == INVALID)
            cout << "INVALID\n";
        else if (out == WEAK)
            cout << "WEAK\n";
    }
    return 0;
}