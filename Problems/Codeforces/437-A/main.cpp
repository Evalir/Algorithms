#include <bits/stdc++.h>
using namespace std;
int main() {
    vector<string> V(4);
    for(auto &i : V) cin >> i;
    int ans = 0;
    for(int i = 0; i < 4; i++) {
        bool ok = true;
        for(int j = 0; j < 4; j++) {
            if (i != j) {
                if ((V[i].size()-2) != 2*(V[j].size()-2)) {
                    ok = false;
                    break;
                }
            }
        }
        if (ok && !ans) ans = i + 1;
        else {
            cout << "C" << endl;
            return 0;
        }
        ok = true;
        for(int j = 0; j < 4; j++) {
            if (i != j) {
                if ((V[i].size()-2)*2 != (V[j].size()-2)) {
                    ok = false;
                    break;
                }
            }
        }
        if (ok && !ans) ans = i + 1;
        else {
            cout << "C" << endl;
            return 0;
        }
    }
    if (ans == 1) puts("A");
    if (ans == 2) puts("B");
    if (ans == 3) puts("C");
    if (ans == 4) puts("D");
    else puts("C");

    return 0;
}