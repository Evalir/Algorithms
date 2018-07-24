#include <iostream>
#include <string>
#include <queue>
#include <algorithm>
using namespace std;

typedef vector<int> VI;
typedef vector<VI> VVI;

#define MAXN 1004

int N;      // cantidad de nodos
VVI adj;    // adjacency list del grafo
VVI adjC;   // adjacency list paralelo con los costos de los edges

// Nodo o estado del grafo para Dijkstra
struct State {
   int id;           // posicion donde estas (algo que identifique donde estas)
   int cost;         // costo/distancia/tiempo hasta este nodo/estado
   State( int _id, int _cost ) {     // construtor para conveniencia
      id  = _id;
      cost = _cost;
   }

   State() {}        // constructor vacio por si quieres llenarlo manualmente

   // comparacion de estados
   bool operator< ( const State& s ) const {
      if (cost != s.cost)
         return cost > s.cost;  // el priority queue de C++ es un max PQ en vez
                                // de min PQ. Por lo tanto, debes reversar la
                                // logica de comparacion de lo que "normal"
      return id > s.id;
   }
};

const int INF = 1000000000;     // costo infinito

// matrix de distancias calculado por dijkstra
int D[MAXN];
// matrix de parents para rastreo de una ruta corta (si necesitas encontrar una)
State P[MAXN];  // previous state... realmente no necesitas el campo cost del
                // State.  Esta declaracion usa el constructor vacio de State

// dijkstra desde el source src al destino dst
int ditra( int src, int dst ) {
   // inicializar todas las celdas de D a costo infinito
   for (int u = 0; u < N; ++u)
      D[u] = INF;
   // ... excepto el (los) source(s), el (los) cual(es) inicializas a 0
   D[src] = 0;
   P[src].id = -1;   // dummy para indicar el estado inicial no tiene padre

   // ingresar el (los) source(s) al priority queue
   priority_queue<State> pq;
   pq.push( State(src, 0) );

   // mientras la cola no esta vacia
   while ( !pq.empty() ) {
      State cur = pq.top();
      pq.pop();

      if (cur.id == dst) {
         // si llegaste al final, devuelve la distancia
         // o imprimes el shortest path, rastreando hacia atras con el arreglo P
         vector<State> V;

         // empezando desde el ultimo, rastreas hacia el estado inicial
         for (State x = cur; x.id != -1; x = P[x.id])
            V.push_back(x);
         // V tiene uno de los shortest paths, pero invertido!  Reversalo:
         reverse(V.begin(), V.end());

         // imprimo el path
         for (int j = 0; j < V.size(); ++j) {
            if (j > 0) cout << " -> ";
            cerr << V[j].id;
         }
         cerr << endl;

         return D[cur.id];
      }

      // como el priority queue de C++/Java no permiten actualizar el priority
      // de un elemento, estamos insertando nodos de mas en el PQ, lo cual puede
      // causar TLE.  Para evitar TLE, hacemos este chequeo
      if ( cur.cost > D[cur.id] )
         // este es un nodo visitado anteriormente, skip!
         continue;

      // por cada edge (transicion)
      for (int j = 0; j < adj[cur.id].size(); ++j) {
         State nxt( adj[cur.id][j], cur.cost );
         // si es necesario, valida si el estado es valido.  Por ejemplo, si
         // es un board, asegurate que NO se haya salido del borde del tablero
         // ...

         // actualizo el costo con el weight del edge/transicion
         nxt.cost += adjC[cur.id][j];

         // si la distancia mejora...
         if (D[nxt.id] > nxt.cost) {
            // actualiza la mejor distancia
            D[nxt.id] = nxt.cost;
            // seteas el parent para el backtracking
            P[nxt.id] = cur;
            // agregas el nuevo estado al PQ
            pq.push(nxt);
         }
      }
   }

   // si llegas aqui, quiere decir que no puedes llegar al destino.
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
