#include <bits/stdc++.h>
using namespace std;
string dp(string a) {
    if (a.size() & 1) return a;
    string x = dp(a.substr(0, a.size()/2));
    string y = dp(a.substr(a.size()/2, a.size()/2));
    if (x > y) swap(x,y);
    return x + y;
}
int main() {
    string a, b;
    cin >> a >> b;
    if (dp(a) == dp(b)) puts("YES");
    else puts("NO");
    return 0;
}