#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdio>
#include <cmath>
using namespace std;

int n;
double ans = 0.0;
vector<vector<int> > V(1000005);
bool used[1000005];

void dfs(int u, int p, double pr, int d) {
  int nb = 0;
  for(int i : V[u])
    if (i != p)
      ++nb;
  used[u] = true;
  for(int i : V[u])
    if (!used[i])
      dfs(i,u,pr/nb,d+1);
  if (nb == 0)
    ans += pr*d;
}

int main() {
  cin >> n;
  for(int i = 0; i < n-1; i++) {
    int x,y;
    cin >> x >> y;
    --x,--y;
    V[x].push_back(y);
    V[y].push_back(x);
  }

  dfs(0,-1,1.0,0);
  printf("%.8lf", ans);
  puts("");
}
