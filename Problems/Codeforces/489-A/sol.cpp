#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> s(n);
    for(auto &t : s) cin >> t;
    vector<pair<int,int>> anw;
    for(int i = 0; i < n; i++) {
        int k = i;
        for(int j = i + 1; j < n; j++) {
            if (s[k] > s[j]) {
                k = j;
            }
        }
        if (k != i)
            anw.push_back({i,k});
        swap(s[i],s[k]);
    }
    cout << anw.size() << endl;
    for(int i = 0; i < (int)anw.size(); i++)
        cout << anw[i].first << ' ' << anw[i].second << endl;
    return 0;
}
