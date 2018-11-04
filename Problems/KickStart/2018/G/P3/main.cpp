#include <bits/stdc++.h>
using namespace std;
using Long = long long;
int N, M, E, SR, SC, TR, TC;
vector<vector<Long>> G;
int DX[] = {-1,0,0,1};
int DY[] = {0,-1,1,0};
struct State {
    int i, j;
    Long dist;
    bool operator<(const State& s) const {
        if (dist != s.dist) return dist > s.dist;
        if (i != s.i) return i < s.i;
        return j < s.j;
    }
};
Long ditra() {
    const int INF = 1000000000;
    vector<vector<Long>> D(N + 10, vector<Long>(M + 10,INF));
    priority_queue<State> pq;
    D[SR][SC] = 0;
    State initialState = {SR,SC,0};
    pq.push(initialState);
    while (!pq.empty()) {
        State cur = pq.top();
        pq.pop();
        int cr = cur.i;
        int cc = cur.j;
        Long dist = cur.dist;
        if (dist > D[cr][cc]) continue;
        if (cr == TR && cc == TC) {
            if (E - D[cur.i][cur.j] >= 0) return E-D[cur.i][cur.j];
            else return -1LL;
        }
        for(int i = 0; i < 4; i++) {
            int nr = DX[i], nc = DY[i];
            State next = {cr + nr, cc + nc,0};
            if (cr + nr >= N || cc + nc >= M || cr + nr < 0 || cc + nc < 0) continue;
            if (G[next.i][next.j] == -100000) continue;
            next.dist = dist - G[next.i][next.j];
            if (D[next.i][next.j] > next.dist) {
                D[next.i][next.j] = next.dist;
                pq.push(next);
            }
        }
    }

    return -1;
}

int main() {
    int t;
    scanf("%d", &t);
    int cas = 0;
    while(t--) {
        cas++;
        scanf("%d%d%d%d%d%d%d",&N,&M,&E,&SR,&SC,&TR,&TC);
        G = vector<vector<Long>>(N + 10,vector<Long>(M + 10,0));
        for(int i = 0; i < N; i++) {
            for(int j = 0; j < M; j++) {
                scanf("%lld", &G[i][j]);
            }
        }
        SR--,SC--,TR--,TC--;
        //run dijkstra
        Long ans = ditra();
        printf("Case #%d: %lld\n", cas, ans);
    }
    return 0;
}

/*
 100
4 4 100 1 1 4 4
0 0 0 0
0 0 0 0
0 0 0 -100000
0 0 -100000 0
 * */