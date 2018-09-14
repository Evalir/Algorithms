#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    string s, t;
    cin >> s >> t;
    string a = s, b = t;
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    if (a != b) {
        cout << -1 << endl;
        return 0;
    }
    int ans = 0;
    vector<int> anw;
    for(int i = 0; i < n; i++) {
        if (s[i] == t[i]) continue;
        if (s[i] != t[i]) {
            int cp = -1;
            for(int j = i + 1; j < n; j++) {
                if (s[j] == t[i]) {
                    cp = j;
                    break;
                }
            }
            for (int j = cp - 1; j >= i; --j) {
                swap(s[j], s[j + 1]);
                anw.push_back(j + 1);
                ans++;
            }
        }
    }
    cout << ans << endl;
    for(auto i : anw) cout << i << ' ';
    return 0;
}