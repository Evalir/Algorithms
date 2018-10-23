#include <bits/stdc++.h>
using namespace std;
using Long = long long;
const int INF = 1 << 30;
vector<int> RN(100010), D1(100010, INF),D2(100010, INF), CC;
vector<int> adj[100010];
vector<bool> vis(100010, false), vis2(100010, false);
#define RED 10

void dfs(int u, int d = 0) {
    vis[u] = true;
    D1[u] = d;
    CC.push_back(u);
    for(auto v : adj[u]) {
        if (!vis[v] && RN[v]) dfs(v, d + 1);
    }
}

void dfsMark(int u, int d = 0) {
    vis2[u] = true;
    D2[u] = d;
    for(auto v : adj[u]) {
        if (!vis2[v] && RN[v]) dfsMark(v, d + 1);
    }
}

int main() {
    int n, R;
    scanf("%d%d", &n, &R);
    RN.resize(R);
    for(int i = 0; i < R; i++) {
        int c;
        scanf("%d", &c);
        c--;
        RN[c] = RED;
    }
    for(int i = 0; i < n-1; i++) {
        int x,y;
        scanf("%d%d", &x,&y);
        x--,y--;
        if (RN[x] == RED && RN[y] == RED) {
            adj[x].push_back(y);
            adj[y].push_back(x);
        }
    }
    int ans = 0;
    for(int i = 0; i < n; i++) {
        if (!RN[i]) {continue;}
        if (vis[i]) continue;
        CC.clear();
        dfs(i,0);
        int bnode = i, bdist = 0;
        for(auto v : CC) {
            if (D1[v] > bdist) {
                bdist = D1[v];
                bnode = v;
            }
        }
        dfsMark(bnode, 0);
        int bnode2 = i, bdist2 = 0;
        for(auto v : CC) {
            if (D2[v] > bdist2) {
                bdist2 = D2[v];
                bnode2 = v;
            }
        }
        ans = max(ans, bdist2 + 1);
    }
    printf("%d\n", ans);

    return 0;
}