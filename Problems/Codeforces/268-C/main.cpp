#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<pair<int,int>> anw;
    for(int i = 0; i <= min(n,m); i++) {
        anw.push_back({i,min(n,m)-i});
    }
    cout << anw.size() << endl;
    for(auto i : anw) cout << i.first << ' ' << i.second << endl;
    puts("");

    return 0;
}