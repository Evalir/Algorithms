#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <stack>
#include <set>
#include <map>
#include <queue>
using namespace std;

using ll = long long;
using VVI = vector<vector<int> >;
using VI = vector<int>;
using VB = vector<bool>;

VVI g(5e3+10);
VB used(5e3+10);
stack<int> vg;

void dfs(int u) {
  used[u] = true;
  for(int v : g[u])
    if(!used[v])
      dfs(v);
}

void dfsMark(int u) {
  used[u] = true;
  for(int v : g[u])
    if (!used[v])
      dfs(v);
  vg.push(u);
}

int main() {
  int n,m,s;
  cin >> n >> m >> s;
  for(int i = 0; i < m; i++) {
    int x,y;
    cin >> x >> y;
    --x,--y;
    g[x].push_back(y);
  }
  dfs(s-1);
  for(int i = 0; i < n; i++)
    if (!used[i])
      dfsMark(i);
  for(int i = 0; i < n; i++)
    used[i] = false;
  int ans = 0;
  while(!vg.empty()) {
    int v = vg.top();
    vg.pop();
    if (!used[v]) {
      dfs(v);
      ++ans;
    }
  }
  cout << ans << endl;
  return 0;
}

