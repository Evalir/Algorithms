#include <bits/stdc++.h>
using namespace std;
map<int,int> *nodeFreq[100010];
vector<int> value(100010);
vector<int> SZ(100010);
vector<vector<int>> adj(100010);

void subtreeSize(int u, int p) {
   SZ[u] = 1;
   for(auto v : adj[u]) {
      if (v != p) {
         subtreeSize(v,u);
         SZ[u] += SZ[v];
      }
   }
}

vector<int> ans(100010);

void dfsSicario(int u, int p) {
   int largestChild = -1;
   for(auto v : adj[u]) {
      if (v != p) {
         dfsSicario(v,u);
         if (largestChild == -1 || SZ[v] > SZ[largestChild]) largestChild = v;
      }
   }
   if (largestChild == -1) {
      nodeFreq[u] = new map<int,int>();
   } else {
      nodeFreq[u] = nodeFreq[largestChild];
   }
   auto& cur = *nodeFreq[u];
   int bestSoFar = largestChild == -1 ?
                  value[u] : ans[largestChild];
   if (u+1 == 10)
      cerr << "bestSoFar = " << bestSoFar << endl;
   for(auto v : adj[u]) {
      if (v != p && v != largestChild) {
         for(auto it : *nodeFreq[v]) {
            cur[it.first] += it.second;
            if (cur[it.first] > cur[bestSoFar] || 
               (cur[it.first] == cur[bestSoFar] &&
                it.first < bestSoFar)) {
               bestSoFar = it.first;
               if (u+1 == 10)
                  cerr << "bestSoFar actualizado a " << bestSoFar << endl;

            }
         }
      }
   }
   cur[value[u]]++;
   if (cur[value[u]] > cur[bestSoFar] ||
      (cur[value[u]] == cur[bestSoFar] && value[u] < bestSoFar)) {
      bestSoFar = value[u];
   }
   ans[u] = bestSoFar;
   
}

int main() {
   int n;
   cin >> n;
   for(int i = 0; i < n; i++) cin >> value[i];
   for(int i = 0; i < n - 1; i++) {
      int u, v;
      cin >> u >> v;
      u--,v--;
      adj[u].push_back(v);
      adj[v].push_back(u);
   }
   subtreeSize(0,-1);
   dfsSicario(0,-1);
   for(int i = 0; i < n; i++) {
      cout << "ans for node " << i + 1 << " is " << ans[i] << endl;
   }
   return 0;
}
