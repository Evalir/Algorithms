#include <bits/stdc++.h>
using namespace std;
typedef long long llong;
typedef vector<int> VI;
typedef vector<VI> VVI;

int N;
VVI adj;
void dfs1(VI& Depth, VI& P, int u, int p = -1, int d = 0) {
   Depth[u] = d;
   P[u] = p;
   for(auto v : adj[u]) {
      if (v != p) {
         dfs1(Depth, P, v, u, d + 1);
      }
   }
}

void dfs2(VI& Depth, VI& P, VI& DP, int u, int p = -1, int d = 0) {
   Depth[u] = d;
   P[u] = p;
   DP[u] = 0;
   for(auto v : adj[u]) {
      if (v != p) {
         dfs2(Depth, P, DP, v, u, d + 1);
         DP[u] = max(DP[u], 1 + DP[v]);
      }
   }
}

void backtrack(VI& longestPath, const VI& P, int u) {
   if (u == -1) return;
   longestPath.push_back(u);
   backtrack(longestPath, P, P[u]);
}


int main(int argc, char* argv[]) {
   ios_base::sync_with_stdio(false); 
   cin.tie(NULL);

   cin >> N;
   adj = VVI(N);
   //leimo to
   for (int j = 1; j < N; ++j) {
      int u, v;
      cin >> u >> v;
      --u, --v;
      adj[u].push_back(v);
      adj[v].push_back(u);
   }

   //buscar longest path
   VI Depth = VI(N,0);
   VI P = VI(N, -1);
   dfs1(Depth, P, 0, -1);

   int fnode = 0, snode = 0, bdis = 0;
   for(int i = 0; i < N; i++) {
      if (Depth[i] > bdis) {
         bdis = Depth[i];
         fnode = i;
      }
   }

   VI Depth1 = VI(N,0);
   VI P1 = VI(N, -1);
   dfs1(Depth1, P1, fnode, -1);

   bdis = 0;
   for(int i = 0; i < N; i++) {
      if (Depth1[i] > bdis) {
         bdis = Depth1[i];
         snode = i;
      }
   }

   VI Depth2 = VI(N,0);
   VI P2 = VI(N, -1);
   dfs1(Depth2, P2, snode, -1);

   VI longestPath;
   backtrack(longestPath, P2, fnode);

   VI posInLongestPath(N, -1);
   cout << "Longest Path: ";
   for(int i = 0; i < (int) longestPath.size(); ++i) {
      int u = longestPath[i];
      cout << " " << u + 1;
      posInLongestPath[u] = i;
   }
   cout << endl;

   VI Depth3 = VI(N, 0);
   VI P3 = VI(N, -1);
   VI DP = VI(N, 0);
   for (int u : longestPath) {
      for (int v : adj[u]) {
         if (posInLongestPath[v] < 0) continue;
         dfs2(Depth3, P3, DP, v, u);
      }
   }

   VI LP(N);
   cout << "Length of Longest path that goes thru vertex u: " << endl;
   for (int u = 0; u < N; ++u) {
      if (posInLongestPath[u] < 0)
         LP[u] = DP[u] + max(Depth1[u], Depth2[u]);
      else
         LP[u] = int(longestPath.size()) - 1;
      //if (u+1 == 15)
      //   cerr << "* " << DP[u] << " " << Depth1[u] << " "  << Depth2[u] << endl;
      cout << (u+1) << ": " << LP[u] << '\n';
   }

   return 0;
}
