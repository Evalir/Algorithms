#include <bits/stdc++.h>
using namespace std;

bool isVowel(char c) {
    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') return true;
    else return false;
}
int main() {
    string s;
    cin >> s;
    bool ok = true;
    for(int i = 0; i < (int)s.size()-1; i++) {
        if (isVowel(s[i])) continue;
        if (s[i] == 'n') continue;
        if (!isVowel(s[i]) && !isVowel(s[i + 1])) ok = false;
    }
    if (s[s.size()-1] != 'n' && !isVowel(s[s.size()-1])) ok = false;
    if (ok) puts("YES");
    else puts("NO");
    return 0;
}