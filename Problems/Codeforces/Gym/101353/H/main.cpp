#include <bits/stdc++.h>
using namespace std;
using Long = long long;
Long MOD = 1000000007LL;
struct Edge {
    Long to, cost;
};
inline int mul(int a, int b) {
    return a*1LL*b%MOD;
}
inline int sub(int a, int b) {
    return (a>=b ? a-b : (a-b+MOD));
}
inline int add(int a, int b) {
    return (a+b>=MOD ? a+b-MOD : a+b);
}
Long sz[300010];
vector<vector<Edge>> G;
void dfs(int u, int p) {
    sz[u] = 1LL;
    for(auto e : G[u]) {
        if (e.to != p) {
            dfs(e.to, u);
            sz[u] += sz[e.to];
        }
    }
}
//klk joa
Long ans = 0LL;
void dfsMark(int u, int p, Long dep , Long aSum) {
    Long naSum = add(aSum, sz[u]);
    for(auto e : G[u]) {
        if (e.to != p) {
            dfsMark(e.to, u, dep + 1LL, naSum);
            Long getSide = sub(naSum, mul(dep, sz[e.to]));
            Long getWays = mul(getSide, sz[e.to]);
            ans = add(ans, mul(getWays,e.cost));
        }
    }
}

int main() {
    int T;
    scanf("%d", &T);
    int cas = 0;
    while(T-->0) {
        ans = 0LL;
        cas++;
        int n;
        scanf("%d", &n);
        memset(sz,0,sizeof(sz));
        G = vector<vector<Edge>> (300010);
        for(int i = 0; i < n - 1; i++) {
            int u, v;
            Long w;
            scanf("%d%d%lld", &u, &v, &w);
            u--,v--;
            G[u].push_back({v,w});
            G[v].push_back({u,w});
        }
        dfs(0,-1);
        dfsMark(0,-1,1,0);
        ans %= MOD;
        if (ans < 0) (ans += MOD) % MOD;
        printf("Case %d: %lld\n", cas, ans);
    }
    return 0;
}

/*
 2
7
1 2 3
1 3 2
2 4 1
2 5 4
3 6 6
3 7 8
6
1 2 3
1 3 2
1 4 4
3 5 7
3 6 1
 * */