#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <string>
#include <climits>
using namespace std;
using VVI = vector<vector<int> >;
using VB = vector<bool>;
using VI = vector<int>;
VVI E(5010);
VB used(5010, 0);
VB cit(5010, 0);
class DisjointSet {
   int N;
   int ncomp;
   vector<int> par;
   vector<int> rank;

public:
   DisjointSet(size_t _N) : N(_N), ncomp(_N), par(_N, -1), rank(_N, 0) {}
   void reset() {
      par.assign(N, -1);
      rank.assign(N, 0);
      ncomp = N;
   }
   int size() const {
      return ncomp;
   }
   int find_rep(int u) {
      return par[u] < 0 ? u : par[u] = find_rep(par[u]);
   }
   bool union_rep(int u, int v) {
      int u_root = find_rep(u);
      int v_root = find_rep(v);
      if (u_root == v_root)
         return false;
      if (rank[u_root] > rank[v_root])
         par[v_root] = u_root;
      else {
         par[u_root] = v_root;
         if (rank[u_root] == rank[v_root])
            rank[v_root] = rank[u_root] + 1;
      }
      --ncomp;
      return true;
   }
};
DisjointSet CN(5010);
int nv = 0;
void dfs(int u) {
  nv++;
  used[u] = true;
  for(int v : E[u]) {
    if (!used[v]) {
      cerr << u << ' ' << v << " together " << endl;
      CN.union_rep(u,v);
      dfs(v);
    }
  }
}
void dfsMark(int u) {
  used[u] = true;
  cit[u] = true;
  cerr << "cit[u] " << u << ' ' << cit[u] << endl;
  for(int v : E[u]) {
    if (!used[v]) {
      CN.union_rep(u,v);
      dfs(v);
    }
  }

}

int main() {
  int n,m,s;
  cin >> n >> m >> s; 
  for(int i = 0; i < m; i++) {
    int x,y;
    cin >> x >> y;
    --x,--y;
    E[x].push_back(y);
  }
  --s;
  for(int i = 0; i < n; i++) {
    if (!used[i] && s != i) {
      cerr << "normal dfs to " << i  << endl;
      dfs(i);
    }
    else {
      cerr << "mark on " << i << endl;
      dfsMark(i);
    }
  }
  cerr << "dfs -> " << nv << endl;
  int ans = 0;
  for(int i = 0; i < n; i++) {
    int sv = CN.find_rep(i);
    cerr << "checking v " << i << " sv = " << sv << endl;
    if (!cit[sv]) {  
      cerr << "sv is start, mark " << endl;
      for(int u : E[i])
        used[u] = true;
      CN.union_rep(sv,s);
      ++ans;
    }
  }
  cout << ans << endl;
  return 0;
}
