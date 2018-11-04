#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using pii = pair<ll,ll>;
using VI = vector<int>;
using VL = vector<ll>;

int main() {
    string s, z;
    getline(cin,s);
    getline(cin, z);
    if (s == z) {
        cout << "Accepted" << endl;
    } else if (s != z) {
        string ns, nz;
        for(int i = 0; i < (int)s.size(); i++) {
            if (s[i] != ' ') ns += s[i];
        }
        for(int i = 0; i < (int)z.size(); i++) {
            if (z[i] != ' ') nz += z[i];
        }
        if (ns == nz) {
            cout << "Presentation Error" << endl;
        }
        else {
            cout << "Wrong Answer" << endl;
        }
    }
    return 0;
}