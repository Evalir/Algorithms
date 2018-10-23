#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    scanf("%d", &n);
    char buf[20];
    scanf("%s", buf);
    string s = buf;
    string ans;
    for(auto &i : s) {
        if (i == '0') continue;
        if (i == '1') continue;
        if (i == '2') ans += '2';
        if (i == '3') ans += '3';
        if (i == '4') ans += "322";
        if (i == '5') ans += '5';
        if (i == '6') ans += "53";
        if (i == '7') ans += '7';
        if (i == '8') ans += "7222";
        if (i == '9') ans += "7332";
    }
    sort(ans.rbegin(), ans.rend());
    cout << ans << '\n';
    return 0;
}