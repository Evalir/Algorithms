#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    vector<int> f(30,0);
    for(int i = 0; i < n; i++) {
        f[s[i]-'A']++;
    }
    int ans = 1e9;
    for(int i = 0; i < k; i++) {
        ans = min(f[i], ans);
    }
    cout << ans*k << endl;
    return 0;
}