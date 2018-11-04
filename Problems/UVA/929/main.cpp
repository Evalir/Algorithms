#include <bits/stdc++.h>
using namespace std;

const int INF = (1 << 30) - 1;

struct State {
    int r, c, cost;

    bool operator<(const State &o) const {
        if (cost != o.cost) return cost > o.cost;
        if (r != o.r) return r < o.r;
        return c < o.c;
    }
};

int dx[] = {-1,0,0,1};
int dy[] = {0,-1,1,0};
int G[1010][1010];
int n,m;
int ditra() {
    int D[1010][1010];
    for(int i = 0; i < 1000; i++) for(int j = 0; j < 1000; j++) D[i][j] = INF;
    priority_queue<State> PQ;
    PQ.push({0,0,G[0][0]});
    D[0][0] = G[0][0];
    while(!PQ.empty()) {
        State cur = PQ.top(); PQ.pop();
        if (cur.r == n - 1 && cur.c == m - 1) {
            return D[n - 1][m - 1];
        }
        if (D[cur.r][cur.c] < cur.cost) continue;
        for(int i = 0; i < 4; i++) {
            State nxt = {cur.r + dx[i], cur.c + dy[i]};
            if (nxt.r < 0 || nxt.r >= n || nxt.c < 0 || nxt.c >= m) continue;
            nxt.cost = cur.cost + G[nxt.r][nxt.c];
            if (D[nxt.r][nxt.c] > nxt.cost) {
                D[nxt.r][nxt.c] = nxt.cost;
                PQ.push(nxt);
            }
        }
    }
    assert(false);
    return -1;
}


int main() {
    int t;
    scanf("%d", &t);
    while(t--) {
        scanf("%d%d", &n, &m);
        for(int i = 0; i < n; i++) for(int j = 0; j < m; j++) scanf("%d", &G[i][j]);
        int ans = ditra();
        printf("%d\n", ans);
    }
    return 0;
}