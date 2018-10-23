#include <bits/stdc++.h>
using namespace std;
char g[2010][2010];
bool vis[2010][2010];
int ans = 0, fr = 0;
int n, m;

void getFree() {
    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++)
            if (g[i][j] == '.') fr++;
}

typedef vector<int> VI;
typedef vector<VI> VVI;

#define MAXN 2010

int N;
VVI adj;
VVI adjC;

struct Coord {int x, y};


struct State {
    int id;
    int cost;
    State( int _id, int _cost ) {
        id  = _id;
        cost = _cost;
    }

    State() {}

    bool operator< ( const State& s ) const {
        if (cost != s.cost)
            return cost > s.cost;  // el priority queue de C++ es un max PQ en vez
        // de min PQ. Por lo tanto, debes reversar la
        // logica de comparacion de lo que "normal"
        return id > s.id;
    }
};

const int INF = 1000000000;     // costo infinito

int D[MAXN];
State P[MAXN];

int dijkstra( Coord src ) {
    for (int u = 0; u < N; ++u)
        D[u] = INF;
    D[src] = 0;
    P[src].id = -1;

    priority_queue<State> pq;
    pq.push( State(src, 0) );

    while ( !pq.empty() ) {
        State cur = pq.top();
        pq.pop();
        if (cur.id == dst) {
            return D[cur.id];
        }
        if ( cur.cost > D[cur.id] ) continue;

        for (int j = 0; j < adj[cur.id].size(); ++j) {
            State nxt( adj[cur.id][j], cur.cost );
            nxt.cost += adjC[cur.id][j];

            if (D[nxt.id] > nxt.cost) {
                D[nxt.id] = nxt.cost;
                P[nxt.id] = cur;
                pq.push(nxt);
            }
        }
    }
    return INF;   // o devuelves -1
}



void ff(int r, int c, int x, int y) {
    if (r < 0 || r >= n || c < 0 || c >= m || x < 0 || y < 0) return;
    if (g[r][c] == '*') return;
    if (vis[r][c]) return;
    if (ans == fr) return;
    vis[r][c] = true;
    ans++;
    ff(r+1,c,x,y);
    ff(r-1,c,x,y);
    ff(r,c-1,x-1,y);
    ff(r,c+1,x,y-1);
}

int main() {
    memset(vis,0,sizeof(vis));
    cin >> n >> m;
    int r, c;
    cin >> r >> c;
    int x, y;
    cin >> x >> y;
    for(int i = 0; i < n; i++) for(int j = 0; j < m; j++) cin >> g[i][j];
    getFree();
    ff(r-1,c-1,x,y);
    cout << ans << endl;
    return 0;
}