#include <bits/stdc++.h>
using namespace std;
using ii = pair<int,int>;
int n,m;
cin n >> m;
bool vis[1010][1010];
char g[1010][1010];
class DisjointSet {
   int N;
   int ncomp;
   vector<pair<int,int> > par;
   vector<int> rank;

public:
   DisjointSet(size_t _N) : N(_N), ncomp(_N), par(_N, {-1,-1}), rank(_N, 0) {}
   void reset() {
      par.assign(N, {-1,-1});
      rank.assign(N, 0);
      ncomp = N;
   }
   int size() const {
      return ncomp;
   }
   ii find_rep(pair<int,int> u) {
   // path compression
      if (u.first < 0 && u.second < 0)
        return find_rep(par[u]);
      else
        return u;
      //return par[u] < 0 ? u : par[u] = find_rep(par[u]);
   }
   bool union_rep(ii u, ii v) {
      ii u_root = find_rep(u);
      ii v_root = find_rep(v);
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

void tr(int r, int c,int lr, int lc, DisjointSet& S) {
    if (r < 0 || r > n-1 || c < 0 || c > m-1)
        return;
    if (vis[r][c]) {
        S.union_rep({r,c}, {lr,lc});
        return;
    }
    vis[r][c] = true;
    if (g[r][c] == 'N') tr(r-1, c, r,c S);
    if (g[r][c] == 'S') tr(r+1, c, r,c,S);
    if (g[r][c] == 'E') tr(r, c+1, r,c,S);
    if (g[r][c] == 'S') tr(r, c-1, r,c,S);
}

int main() {
    cin >> n >> m;
    DisjointSet S(n*m);
    memset(vis, 0, sizeof(vis));
    for(int i = 0; i < n; i++) 
        for(int j = 0; j < m; j++)
            cin >> g[i][j];
    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++)
            if (!vis[i][j])
                tr(i,j,i,j,S);

    cout << S.size() << endl;
    return 0;
}