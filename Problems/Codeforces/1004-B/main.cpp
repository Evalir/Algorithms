#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    string ans = "";
    for(int i = 0; i < m; i++) {
        int x,y;
        cin >> x >> y;
    }
    for(int i = 0; i < n; i++) {
        if (i & 1) cout << '0';
        else cout << '1';
    }
    puts("");
    return 0;
}