#include <bits/stdc++.h>
using namespace std;

struct Edge {
    int v, cost;
};
struct State {
    int v, cost;
    bool operator<(const State &o) const {
        return cost > o.cost;
    }
};

vector<vector<Edge>> adj;
int n, m, s, t;
const int INF = 1 << 30;

int ditra() {
    vector<int> D(n + 10, INF);
    priority_queue<State> PQ;
    D[s] = 0;
    PQ.push({s,0});
    while(!PQ.empty()) {
        State cur = PQ.top(); PQ.pop();
        if (cur.v == t) {
            return D[cur.v];
        }
        if (D[cur.v] < cur.cost) continue;
        for(auto i : adj[cur.v]) {
            State nxt = {i.v, i.cost + cur.cost};
            if (D[nxt.v] > nxt.cost) {
                D[nxt.v] = nxt.cost;
                PQ.push(nxt);
            }
        }
    }
    return -1;
}

int main() {
    int T, cas = 0;
    scanf("%d", &T);
    while(T--) {
        cas++;
        scanf("%d%d%d%d", &n,&m,&s,&t);
        adj = vector<vector<Edge>>(n + 10);
        for(int i = 0 ; i < m; i++) {
            int u, v, w;
            scanf("%d%d%d", &u,&v,&w);
            adj[u].push_back({v,w});
            adj[v].push_back({u,w});
        }
        int ans = ditra();
        if (ans > -1) printf("Case #%d: %d\n",cas,ans);
        else printf("Case #%d: unreachable\n",cas);
    }
    return 0;
}