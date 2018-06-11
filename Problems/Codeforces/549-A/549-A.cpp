#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
using namespace std;

int main() {
  char arr[100][100];
  for(int i = 0; i < 100; i++)
    for(int j = 0; j < 100; j++)
      arr[i][j] = '?';

  int n,m,ans = 0;
  cin >> n >> m;
  for(int i = 1; i <= n; i++)
    for(int j = 1; j <= m; j++)
      cin >> arr[i][j];
  set<char> k;
  for(int i = 1; i <= n; i++) {
    for(int j = 1; j <= m; j++) {
      k.clear();
      k.insert(arr[i][j]);
      k.insert(arr[i][j+1]);
      k.insert(arr[i+1][j]);
      k.insert(arr[i+1][j+1]);
      if (k.count('f') > 0 && k.count('a') > 0 && k.count('c') > 0 && k.count('e') > 0)
        ans++;
    }
  } 
  cout << ans << endl;
  return 0;
}

