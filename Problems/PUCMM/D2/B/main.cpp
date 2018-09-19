#include <bits/stdc++.h>
using namespace std;

string pr(string k) {
    string a = k;
    for(int i = 0; i < (int)a.size(); i++) {
        a[i] = tolower(a[i]);
    }
    for(int i = 0; i < (int)a.size(); i++) {
        if (a[i] == 'b' || a[i] == 'p') a[i] = '.';
        if (a[i] == 'i' || a[i] == 'e') a[i] = '?';
    }
    return a;
}
int main() {
    int t;
    cin >> t;
    while(t--) {
        string a, b;
        cin >> a >> b;
        a = pr(a);
        b = pr(b);
        if (a == b) {
            cout << "Yes" << endl;
        }
        else {
            cout << "No" << endl;
        }
    }
    return 0;
}