#include <bits/stdc++.h>
using namespace std;
char gr[510][510];
int dis[510][510];
const int INF = 1 << 30;

struct Pos {
    int row, col;
};
int n, m, q;
int dr[] = {-1, 0, 0, 1};
int dc[] = {0, -1, 1, 0};

int bfs( Pos src, Pos dst , bool al = true) {
    int R = 5;
    int C = 5;
    queue<Pos> q;
    q.push(src);
    dis[ src.row ][ src.col ] = al ? 0 : 5;
    while (!q.empty()) {
        Pos cur = q.front();
        q.pop();
        int dist = dis[cur.row][cur.col];
        
        if (cur.row == dst.row && cur.col == dst.col)
            return dist;
        
        for (int k = 0; k < 4; ++k) {
            Pos nxt = { cur.row + dr[k], cur.col + dc[k] };
            if ( nxt.row < 0 || nxt.row >= R || nxt.col < 0 || nxt.col >= C )
                continue;
            if ( gr[ nxt.row ][ nxt.col ] == 'x')
                continue;
            if (gr[nxt.row][nxt.col] == '?' && al)
                continue;
            if ( dis[ nxt.row ][ nxt.col ] == INF ) {
                cout << "processing node " << nxt.row << " " << nxt.col << endl;
                dis[ nxt.row ][ nxt.col ] = dist + 1;
                q.push(nxt);
            }
        }
    }
    
    return -1;  // -1 indica que no lograste llegar al destino
}

int main() {
    cin >> n >> m >> q;
    memset(gr,'.', sizeof(gr));
    memset(dis, INF, sizeof(dis));
    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++)
            cin >> gr[i][j];
    while(q--) {
        int x, y;
        cin >> x >> y;
        gr[x][y] = '?';
    }
    int alt = bfs({0,0}, {n-1,m-1});
    memset(dis, INF, sizeof(dis));
    int ans = bfs({0,0}, {n-1,m-1}, false);
    cerr << alt << ans << endl;
    if (alt < ans || ans == -1)
        puts("NO");
    else
        puts("YES");
    return 0;
}
