#include <bits/stdc++.h>
using namespace std;
#define MAXN 100010
using ll = long long;
typedef vector<ll> VI;
typedef vector<VI> VVI;

ll N;      
VVI adj;
VVI adjC;

struct State {
   ll id;
   ll cost;
   State( ll _id, ll _cost ) {
      id  = _id;
      cost = _cost;
   }

   State() {}

   bool operator< ( const State& s ) const {
      if (cost != s.cost)
         return cost > s.cost;  
         
         return id > s.id;
   }
};

const ll INF = 1000000000;

ll D[MAXN];

State P[MAXN];

ll ditra( int src, int dst ) {
   
   for (int u = 0; u < N; ++u)
      D[u] = INF;
   D[src] = 0;
   P[src].id = -1;   // dummy para indicar el estado inicial no tiene padre

   priority_queue<State> pq;
   pq.push( State(src, 0) );

   while ( !pq.empty() ) {
      State cur = pq.top();
      pq.pop();

      if (cur.id == dst) {
         vector<State> V;

         for (State x = cur; x.id != -1; x = P[x.id])
            V.push_back(x);
         reverse(V.begin(), V.end());

         for (int j = 0; j < V.size(); ++j) {
            cout << V[j].id+1 << ' ';
         }

         return D[cur.id];
      }

      if ( cur.cost > D[cur.id] )
         continue;

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
                                                                   
   return -1;   // o devuelves -1
}

int main() {
    int m;
    cin >> N >> m;
    adj = VVI(N);
    adjC = VVI(N);
    for(int i = 0; i < m; i++) {
        ll x,y,z;
        cin >> x >> y >> z;
        --x,--y;
        adj[x].push_back(y);
        adj[y].push_back(x);
        adjC[x].push_back(z);
        adjC[y].push_back(z);
    }
      ll ans = ditra(0,N-1);
      if (ans == -1) cout << ans << endl;
      return 0;

}
