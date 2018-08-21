#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <string>
#include <cstring>
using namespace std;

int main() {
    int a;
    cin >> a;
    while(a--) {
        string s,t;
        cin >> s >> t;
        for(int i = 0; i < s.size(); i++) {
            s[i] = tolower(s[i]);
        }
        for(int i = 0; i < t.size(); i++) {
            t[i] = tolower(t[i]);
        }
        for(int i = 0; i < s.size(); i++) {
            if (s[i] == 'b' || s[i] == 'p')
                s[i] = '?';
            if (s[i] == 'i' || s[i] == 'e')
                s[i] = '.';
        }
        for(int i = 0; i < t.size(); i++) {
            if (t[i] == 'b' || t[i] == 'p')
                t[i] = '?';
            if (t[i] == 'i' || t[i] == 'e')
                t[i] = '.';
        }
        if (s == t)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;

    }
    return 0;
}