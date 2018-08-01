#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <set>
#include <map>
#include <queue>
using namespace std;
#define MAXN 1000010
using ll = long long;
typedef pair<ll, ll> pll;
typedef vector<pll> VI;
typedef vector<VI> VVI;
const ll INF = (1LL<<60);

ll N;
VVI adj;
ll D[MAXN];
int P[MAXN];

ll ditra(int src, int dst) {
    for (int u = 0; u < N; ++u)
        D[u] = INF;
    D[src] = 0;
    P[src] = -1;
    priority_queue<pll, vector<pll>, greater<pll> > pq;
    pq.push( pll(0, src) );

    while (!pq.empty()) {
        pll cur = pq.top();
        pq.pop();

        if (cur.second == dst) {
            vector<ll> V;

            for (ll x = cur.second; x != -1; x = P[x])
                V.push_back(x);
            reverse(V.begin(), V.end());

            for (int j = 0; j < V.size(); ++j) {
                cout << V[j]+1 << ' ';
            }

            return D[cur.second];
        }

        if ( cur.first > D[cur.second] )
            continue;

        for (int j = 0; j < adj[cur.second].size(); ++j) {
            pll nxt =  { cur.first, adj[cur.second][j].second };
            nxt.first += adj[cur.second][j].first;

            if (D[nxt.second] > nxt.first) {
                D[nxt.second] = nxt.first;
                P[nxt.second] = cur.second;
                pq.push(nxt);
            }
        }
    }

    return -1;
}

int main() {
    int m;
    cin >> N >> m;
    adj = VVI(N);
    for(int i = 0; i < m; i++) {
        ll x,y,z;
        cin >> x >> y >> z;
        --x,--y;
        //cerr << x << ' ' << y << endl;
        adj[x].push_back({z,y});
        adj[y].push_back({z,x});
    }
    //cerr << "N: " << N-1 << endl;
    ll ans = ditra(0,N-1);
    if (ans == -1) cout << ans << endl;
    return 0;

}