#include <bits/stdc++.h>
using namespace std;
bool vis[100010];
int main() {
    int n, s, t;
    cin >> n >> s >> t;
    s--,t--;
    vector<int> f(n);
    for(int &i : f) {
        cin >> i;
        i--;
    }
    memset(vis, 0, sizeof(vis));
    int ans = 0;
    int pos = s;
    while(!vis[pos]) {
        if (pos == t)
            break;
        vis[pos] = true;
        pos = f[pos];
        ans++;
    }
    if (pos == s && s != t) cout << -1 << endl;
    else cout << ans << endl;
    return 0;
}