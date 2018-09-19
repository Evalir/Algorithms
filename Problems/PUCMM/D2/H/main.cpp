#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        string s;
        cin >> s;
        if (s == "0") {
            cout << '0' << endl;
        }
        else if (s[0] == '-') {
            string ns = "";
            int zeros = 0;
            sort(s.begin(), s.end(), greater<char>());
            for(int i = 0; i < s.size(); i++) {
                if (s[i] == '-') continue;
                if (s[i] == '0') zeros++;
                if (s[i] != '-' && s[i] != '0') ns += s[i];
            }
            cout << '-';
            for(int i = 0; i < ns.size(); i++)
                cout << ns[i];
            while(zeros-- > 0) cout << '0';
            cout << endl;
        }
        else {
            int zeros = 0;
            sort(s.begin(), s.end());
            string ns = "";
            for(int i = 0; i < s.size(); i++) {
                if (s[i] == '0') zeros++;
                else ns += s[i];
            }

            for(int i = 0; i < s.size(); i++) {
                cout << s[i];
                while(zeros-- > 0) {
                    cout << '0';
                }
            }
            cout << endl;
        }
    }
    return 0;
}