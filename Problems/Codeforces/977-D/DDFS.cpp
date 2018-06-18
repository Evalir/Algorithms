#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <map>
#include <set>
using namespace std;
typedef long long ll;

vector<vector<ll> > adj;
vector<bool> vis;
vector<ll> ans;
vector<ll> V;
int n;

void dfs(ll u) {
  vis[u] = true;
  for(ll v : adj[u]) {
      if (!vis[v]) {
        dfs(v);
      }
  }
  ans.push_back(u);
}

bool top_sort(ll curr) {
  ans.clear();
  vis.assign(n,false);
  dfs(curr);
  if (ans.size() == n) {
    reverse(ans.begin(), ans.end());
    return true;
  }
  return false;
}

int main() {
  cin >> n;
  V.resize(n);
  vis.resize(n);
  for(ll& i : V)
    cin >> i;
  adj.resize(n+10);
  for(int i = 0; i < V.size(); i++) {
    for(int j = 0; j < V.size(); j++) {
      if (i != j) {
        if (V[j] == V[i]*2) {
          adj[i].push_back(j); 
        } 
        if (V[i] % 3 == 0 && V[j]*3 == V[i]) {
          adj[i].push_back(j);
        }
      }
    }
  }
  bool ok = false;
  for(int i = 0; i < n; i++) {
    ok = top_sort(i);
    if (ok)
      break;
  }
  if (ok) {
  for(ll& u : ans)
      cout << V[u] << ' ';
  puts("");
  }
  return 0;
}
