#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> s(n), z(n);
    for(auto &i : s) cin >> i;
    set<int> ss;
    for(int i = n -1; i >= 0; i--) {
        ss.insert(s[i]);
        z[i] = ss.size();
    }
    while(m--) {
        int x;
        cin >> x;
        x--;
        cout << z[x] << endl;
    }
    return 0;
}