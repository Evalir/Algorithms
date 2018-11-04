#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using pii = pair<ll,ll>;
using VI = vector<int>;
using VL = vector<ll>;
vector<int> G[100010];
vector<int> C(100010,0);
vector<int> L;
bool vis[100010];
int rCount = 0;
const int RED = 10;

int n, r;
int anw = 0;
void dfs2(int u, int d) {
    int cnt = 1;
    vis[u] = true;
    anw = max(d, anw);
    for(int v : G[u]) {
        if (!vis[v]) dfs2(v,d+1);
    }
}
int main() {
    scanf("%d%d", &n, &r);
    vector<int> R;
    for(int i = 0; i < r; i++) {
        int x; scanf("%d", &x);
        x--;
        C[x] = RED;
        R.push_back(x);
    }
    for(int i = 0; i < n-1; i++) {
        int u, v;
        scanf("%d%d", &u, &v);
        u--, v--;
        if (C[u] == RED && C[v] == RED) {
            G[u].push_back(v);
            G[v].push_back(u);
        }
    }
    int ans = 0;
    for(int i: R) {
        if(G[i].size() == 1) {
            memset(vis,0,sizeof(vis));
            dfs2(i, 1);
        }
    }
    printf("%d\n", anw);
    return 0;
}