#include <iostream>
#include <string>
#include <queue>
#include <algorithm>
using namespace std;

typedef vector<int> VI;
typedef vector<VI> VVI;

#define MAXN 1004

int N;      
VVI adj;    
VVI adjC;   


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
         return cost > s.cost;
                                
                                
      return id > s.id;
   }
};

const int INF = 1000000000;
int D[MAXN];
State P[MAXN];

int ditra( int src, int dst ) {
   
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
         vector<State> V;
         for (State x = cur; x.id != -1; x = P[x.id])
            V.push_back(x);

         reverse(V.begin(), V.end());

         for (int j = 0; j < V.size(); ++j) {
            if (j > 0) cout << " -> ";
            cerr << V[j].id;
         }
         cerr << endl;

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
   return INF;   // o devuelves -1
}

int main() {
    N = 11;
   adj = VVI(N);
   adjC = VVI(N);

   adj[0].push_back(1);  adjC[0].push_back(4);

   adj[1].push_back(0);  adjC[1].push_back(4);
   adj[1].push_back(5);  adjC[1].push_back(3);

   adj[2].push_back(5);  adjC[2].push_back(3);
   adj[2].push_back(7);  adjC[2].push_back(9);

   adj[3].push_back(4);  adjC[3].push_back(9);
   adj[3].push_back(9);  adjC[3].push_back(2);

   adj[4].push_back(3);  adjC[4].push_back(9);
   adj[4].push_back(9);  adjC[4].push_back(5);

   adj[5].push_back(1);  adjC[5].push_back(3);
   adj[5].push_back(2);  adjC[5].push_back(3);
   adj[5].push_back(7);  adjC[5].push_back(7);

   adj[6].push_back(7);  adjC[6].push_back(4);

   adj[7].push_back(2);  adjC[7].push_back(9);
   adj[7].push_back(5);  adjC[7].push_back(7);
   adj[7].push_back(6);  adjC[7].push_back(4);
   adj[7].push_back(10); adjC[7].push_back(12);

   adj[9].push_back(4);  adjC[9].push_back(5);
   adj[9].push_back(3);  adjC[9].push_back(2);

   adj[10].push_back(7);  adjC[10].push_back(12);

   int dist = ditra(0, 10);
   cout << "Distancia = " << dist << endl;

   dist = ditra(1, 9);
   cout << "Distancia = " << dist << endl;

   return 0;

}
