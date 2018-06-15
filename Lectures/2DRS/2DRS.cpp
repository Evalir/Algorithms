#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;
#define MAXN 110
int mat[MAXN][MAXN];

int kadane_2d(int n,int m) {
  int ans = (int)-1e9;
  for(int i = 0; i < n; i++) {
    for(int j = 0; j < m; j++) {
      if (i) mat[i][j] += mat[i-1][j];
      if (j) mat[i][j] += mat[i][j-1];
      if (i && j) mat[i][j] += mat[i-1][j-1];
      ans = max(ans, mat[i][j]);
    }
  }
  //n^4
  for(int i = 0; i < n; i++) {
    for(int j = 0; j < m; j++) {
      for(int r = i; r < n; r++) {
        for(int c = j; c < m; c++) {
          int sum = mat[r][c];
          if (i) sum -= mat[i-1][c];
          if (j) sum -= mat[r][j-1];
          if (i && j) sum += mat[i-1][j-1];

          ans = max(ans,sum);  
        }
      }
    }
  }
  return ans;
}
int main() {
  int n,m;
  cin >> n >> m;
  for(int i = 0; i < n; i++)
    for(int j = 0; j < m; j++)
      cin >> mat[i][j];
 
  int ans = kadane_2d(n,m);
  cout << ans << endl;
  return 0;
}
