#include <bits/stdc++.h>
#include <vector>
#include <algorithm>
#include <cmath>
#include <queue>
#include <cstring>
using namespace std;

struct Pos {
    int x,y;
};
int n, m;
int dx[] = {-1,0,0,1};
int dy[] = {0,-1,1,0};
int a[1010][1010];
int D[1010][1010];
const int INF = 1 << 29;
int bfs(int sR, int sC, int dR, int dC) {
    for(int i = 0; i < 1000; i++) for(int j = 0; j < 1000; j++) D[i][j] = INF;
    queue<Pos> Q;
    Pos p = {sR,sC};
    Q.push(p);
    D[sR][sC] = 0;
    while(!Q.empty()) {
        Pos u = Q.front(); Q.pop();
        if (u.x == dR && u.y == dC) {
            return D[dR][dC];
        }
        for(int i = 0; i < 4; i++) {
            Pos v = {u.x + dx[i], u.y + dy[i]};
            if (v.x < 0 || v.x >= n || v.y < 0 || v.y >= m) continue;
            if (a[v.x][v.y]) continue;
            if (D[v.x][v.y] == INF) {
                D[v.x][v.y] = D[u.x][u.y] + 1;
                Q.push(v);
            }
        }
    }
}

int main() {
    while(true) {
        memset(a,0,sizeof(a));
        scanf("%d%d", &n,&m);
        if (!n && !m) break;
        int k;
        scanf("%d", &k);
        while(k--) {
            int row, num;
            scanf("%d%d", &row, &num);
            for(int i = 0; i < num; i++) {
                int x;
                scanf("%d", &x);
                a[row][x]++;
            }
        }
        int sr,sc,tr,tc;
        scanf("%d%d%d%d", &sr,&sc,&tr,&tc);
        int dist = bfs(sr,sc,tr,tc);
        printf("%d\n", dist);
    }
    return 0;
}
