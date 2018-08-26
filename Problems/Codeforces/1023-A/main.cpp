#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <string>
#include <cstring>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    string s, t;
    cin >> s >> t;
    int k = s.find('*');
    if (k == -1) {
        if (s == t) {
            cout << "YES" << endl;
            return 0;
        }
        else {
            cout << "NO" << endl;
            return 0;
        }
    }
    else {
        if (n-1 > m) {
            cout << "NO" << endl;
            return 0;
        }
        for(int i = 0; i < n && s[i] != '*'; i++) {
            if (s[i] != t[i]) {
                cout << "NO" << endl;
                return 0;
            }
        }
        int pt = m-1;
        for(int i = n-1; i >= 0 && s[i] != '*'; i--) {
            if (s[i] != t[pt]) {
                cout << "NO" << endl;
                return 0;
            }
            pt--;
        }
    }
    cout << "YES" << endl;
    return 0;
}