#include <bits/stdc++.h>
using namespace std;
using VVI = vector<vector<int>>;

int ans[1000010];
VVI G(100010);
vector<int> v(100010);
void dfs(int u, int p, int m) {

}

int main() {
    int n;
    scanf("%d", &n);
    for(int i = 0; i < n; i++) {
        int x;
        scanf("%d", &x);
        v[i] = x;
    }
    for(int i = 0; i < n - 1; i++) {
        int u, v;
        scanf("%d%d",&u,&v);
        u--,v--;
        G[u].push_back(v);
        G[v].push_back(u);
    }

    return 0;
}