#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;
#define MAXN 510

int G[MAXN][MAXN];
int best[MAXN];

int main() {
  int n,m,q;
  cin >> n >> m >> q;
  for(int i = 0; i < n; i++) {
    for(int j = 0; j < m; j++) {
      cin >> G[i][j];
    }
  }

  int b = 0, s = 0;
  for(int i = 0; i < n; i++) {
    for(int j = 0; j < m; j++) {
      if (G[i][j])
        s++;
      else {
        b = max(b,s);
        s = 0;
        continue;
      }
    }
    b = max(b,s);
    best[i] = b;
    s = 0;
    b = 0;
  }

  while(q--) {
    int l,r;
    cin >> l >> r;
    --l,--r;
    G[l][r] == 1 ? G[l][r] = 0 : G[l][r] = 1;
    int b = 0, s = 0;
    for(int i = 0; i < m; i++) {
        if (G[l][i])
          ++s;
        else
          b = max(b,s), s = 0;
    }
    b = max(b,s);
    best[l] = b;
    int ans = 0;
    for(int i = 0; i < n; i++)
      ans = max(ans,best[i]);
    cout << ans << endl;
  }

  return 0;
}
