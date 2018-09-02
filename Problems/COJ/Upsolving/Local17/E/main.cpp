#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        string s;
        cin >> s;
        if (s == "0") { cout << s << endl; continue;}
        if (s[0] != '-') {
            string ns = "";
            int cnt = 0;
            for(int i = 0; i < s.size(); i++) {
                if (s[i] != '0') ns += s[i];
                else cnt++;
            }
            sort(ns.begin(), ns.end());
            cout << ns[0];
            while(cnt--) cout << '0';
            for(int i = 1; i < ns.size(); i++)
                cout << ns[i];
            cout << endl;
        }
        else {
            s.erase(s.begin());
            sort(s.begin(), s.end(), greater<int>());
            cout << '-';
            for(auto i : s)
                cout << i;
            cout << endl;
        }
    }
    return 0;
}