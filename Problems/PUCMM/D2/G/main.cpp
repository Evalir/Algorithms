#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        string a, b;
        cin >> a >> b;
        if (a.find(b) != -1) {
            cout << "good" << endl;
            continue;
        }
        bool found = false;
        for(int pt = 0; pt < 4; pt++) {
            string ns = "";
            for(int i = 0; i < 4; i++) {
                if (i != pt) ns += b[i];
            }
            //cerr << "test string " << ns << endl;
            if (a.find(ns) != -1) {
                found = true;
            }
            if (found) break;
        }
        if (found) cout << "almost good" << endl;
        else cout << "none" << endl;
    }
    return 0;
}