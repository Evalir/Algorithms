#include <bits/stdc++.h>
using namespace std;

// adj list & vector to keep track of bigchild
vector<vector<int>> adj(100010), branch(100010);
// color and count
vector<int> color(100010), cnt(100010), ans(100010);
// tree size
int sz[100010];
// Calculate subtree size
void getsz(int u, int p) {
    sz[u] = 1;
    for(auto &v : adj[u]) {
        if (v != p) {
            getsz(v, u);
            sz[u] += sz[v];
        }
    }
}
// get small to largest (sack)
void sack(int u, int p, bool keep) {
    int maxChildCount = -1, bigChildId = -1;
    // Ubiquemos el big child
    for(auto v : adj[u]) {
        if (sz[v] > sz[u] && v != p) {
            maxChildCount = sz[v];
            bigChildId = v;
        }
    }
    // Dfs a small children
    for(auto v: adj[u]) {
        if (v != p && v != bigChildId) {
            sack(v, u, false);
        }
    }
    // DFS a big child
    if (bigChildId != -1) {
        sack(bigChildId, u, true);
        swap(branch[u], branch[bigChildId]);
    }
    // Add my info
    branch[u].push_back(u);
    cnt[color[u]]++;
    // add small children info
    for(auto v : adj[u]) {
        if (v != p && v != bigChildId) {
            for(auto k : branch[v]) {
                branch[u].push_back(k);
                cnt[color[k]]++;
            }
        }
    }
    cout << "ans for " << u << " is " << cnt[color[u]] << " before removal\n";
    ans[u] = cnt[color[u]];
    // remove small children (my) info
    if (!keep) {
        for(auto v : branch[u]) {
            cnt[color[v]]--;
        }
    }
}


int main() {
    int n;
    cin >> n;
    for(int i = 0; i < n; i++) {
        int c;
        cin >> c;
        color[i] = c;
    }
    for(int i = 0; i < n - 1; i++) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    getsz(0,-1);
    for(int i = 0; i < n; i++) {
        cout << "size of subtree of " << i << " is " << sz[i] << '\n';
    }
    sack(0,-1, true);
    for(int i = 0; i < n; i++) {
        cout << "ans for subtree " << i << " color " << color[i] << " is " << ans[i] << '\n';
    }

    return 0;
}