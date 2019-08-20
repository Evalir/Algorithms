#include <bits/stdc++.h>
using namespace std;

// adj list & vector to keep track of bigchild
vector<vector<int>> adj(100010);
// color and count
vector<int> color(100010);
vector<long long> ans(100010);
map<int,int> *branch[100010];
// tree size
int sz[100010];

struct S {
    map<int,int> *branch;
    int cnt, freq;
};

S branches[100010];

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
void sack(int u, int p) {
    int maxChildCount = -1, bigChildId = -1;
    // Ubiquemos el big child y dfs a todos los nodos por igual
    for(auto v : adj[u]) {
        if (v != p) {
            sack(v, u);
            if (sz[v] > maxChildCount) {
                maxChildCount = sz[v];
                bigChildId = v;
      //          cout << "big child is now " << bigChildId << "\n";
            }
        }
    }
    // Si tenemos big child, cojamos su map
    if (bigChildId != -1) branches[u].branch = branches[bigChildId].branch;
    else branches[u].branch = new map<int, int>(); // somos big child, crea un map
    // cuentame
    (branches[u].(*branch))[color[u]]++;
    // anade los hijos pequenos
    for(auto v : adj[u]) {
        if (v != p && v != bigChildId) {
            for(auto x : branches[v].(*branch))
            (branches[u].(*branch))[x.first] += x.second;
        }
    }
    //cout << "on sack, check node " << u << "\n";
    //if (u == 2) cout << "ok\n";
    int mx = -1;
    for(auto x : *branch[u]) {
        //cout << x.first << " : " << x.second << "\n";
        mx = max(mx, x.second);
    }
    long long res = 0;
    //cout << "mx for node " << u << " is " << mx << '\n';
    for(auto x : *branch[u]) {
        if (x.second == mx) res += (x.first) * 1LL;
    }
    ans[u] = res;
}


int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
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
        u--,v--;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    getsz(0,-1);
//    for(int i = 0; i < n; i++) {
//        cout << "size of subtree of " << i << " is " << sz[i] << '\n';
//    }
    sack(0,-1);
//    cout << (*branch[2])[2] << "\n";
//    for(int i = 0; i < n; i++) {
//        cout << "at node " << i << "\n";
//        for(auto x : *branch[i]) {
//            cout << "color " <<  x.first << " appears " << x.second << "\n";
//        }
//        cout << "\n";
//    }
    for(int i = 0; i < n; i++) cout << ans[i] << " ";
    return 0;
}