#include <bits/stdc++.h>
using namespace std;

int main() {
    string s, t;
    while(getline(cin,s)) {
        getline(cin,t);
        bool ok = true;
        for(int i = 0; i < 9; i++) {
            if (s[i] == t[i] && s[i] != ' ') ok = false;
        }
        if (ok) cout << "Y" << endl;
        else cout << "N" << endl;
    }
    return 0;
}