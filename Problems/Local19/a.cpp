#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <cstdio>
#include <set>
#include <map>
#include <queue>

using namespace std;
// DONT USE SCANF !!!!!!!!
int n, l;
string s;
string pattern;
vector<vector<int>> adj(1010);
long long ans = 0;
void selectNode(int u, int p, int curpos) {
    if (s[u] != pattern[curpos])
        return;
    if (curpos == (l - 1)) {
        ans++;
        return;
    }
    for(auto &v : adj[u]) {
        if (v != p)
            selectNode(v, u, curpos + 1);
    }

}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n >> l;
    cin >> s >> pattern;
    for(int u = 0; u < n - 1; u++) {
        int a, b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    for(int i = 0; i < n; i++) {
        selectNode(i, -1, 0);
    }
    cout << ans << endl;
    return 0;
}

