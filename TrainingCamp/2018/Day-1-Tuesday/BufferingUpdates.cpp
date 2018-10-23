/*
 * Problema: Tenemos un arbol rooteado en el nodo 1, donde cada nodo tiene un
 * valor asociado, ejecuta Q operaciones de uno de los siguientes tipos:
 *   Q v: imprime el valor asociado al nodo v
 *   U v: incrementa el valor del nodo v por 1, los hijos de v por 2, los nietos
 *        de v por 3, etc.
 *
 *  Limite:
 *  Cantidad de vertices N <= 10^5
 *  Cantidad de queries  Q <= 10^5
 *  TEMA: SQRT Decomposition (Hidden)
 */
#include <bits/stdc++.h>

using namespace std;


typedef long long llong;
typedef vector<int> VI;
typedef vector<VI> VVI;

#define MAXN 100004
int N;
VI adj[MAXN];
//calcular Euler Tour
int dfs_time = -1;
int dfs_start[MAXN], dfs_end[MAXN];
int depth[MAXN];
void dfs1(int u, int p = -1, int d = 0) {
   dfs_start[u] = ++dfs_time;
   depth[u] = d;
   for (int v : adj[u]) {
      if (v == p) continue;
      dfs1(v, u, d+1);
   }
   dfs_end[u] = dfs_time;
}

int is_ancestor(int a, int u) {
   // is node a an ancesor of u?
   return dfs_start[a] <= dfs_start[u] &&
          dfs_start[u] <= dfs_end[a];
}

llong value[MAXN];

vector<int> upd_buffer;
llong query(int u) {
   llong res = value[u];
   for (int a : upd_buffer) {
      if (is_ancestor(a, u)) {
         cerr << "ancestor " << a+1 << endl;
         res += depth[u] - depth[a] + 1;
      }
   }
   return res;
}

const int SQRTN = 0;
vector<int> to_update;
void dfs2(int u, int p = -1, int nmarks = 0, llong value_to_propagate = 0) {
   value[u] += value_to_propagate + to_update[u];
   for (int v : adj[u]) {
      if (v == p) continue;
      dfs2(v, u,
           nmarks + to_update[u],
           value_to_propagate + nmarks + 2*to_update[u]);
   }
}

void update(int u) {
   upd_buffer.push_back(u);
   if (upd_buffer.size() > SQRTN) {
      to_update = vector<int>(N);
      for (int u : upd_buffer)
         to_update[u]++;
      dfs2(0);
      upd_buffer.clear();
      to_update.clear();
   }
}

int main(int argc, char* argv[]) {
   ios_base::sync_with_stdio(false); 
   cin.tie(NULL);

   cin >> N;
   for (int u = 0; u < N; ++u)
      cin >> value[u];

   for (int j = 1; j < N; ++j) {
      int u, v;
      cin >> u >> v;
      --u, --v;
      adj[u].push_back(v);
      adj[v].push_back(u);
   }

   dfs1(0);

   int Q;
   cin >> Q;
   for (int q = 1; q <= Q; ++q) {
      string oper;
      int u;
      cin >> oper >> u;
      --u;
      if (oper == "Q") {
         llong res = query(u);
         cout << res << endl;
      }
      else {
         update(u);
      }
   }

   return 0;
}

