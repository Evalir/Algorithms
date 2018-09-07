#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> p(m + 10, 0);
    for(int i = 0; i < n; i ++) {
        int a, b;
        cin >> a >> b;
        for(int x = a; x <= b; x++) {
            p[x] = 1;
        }
    }
    int ans = 0;
    vector<int> anw;
    for(int i = 1; i <= m; i++)
        if (!p[i]) {
            ans++;
            anw.push_back(i);
        }
    cout << ans << endl;
    for(auto i : anw) cout << i << ' ';
    puts("");
    return 0;
}
