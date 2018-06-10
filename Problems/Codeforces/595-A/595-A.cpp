#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

int main() {
  int n, m;
  cin >> n >> m;
  m *= 2;
  m *= n;
  vector<int> flats(m);

  for(int i = 0; i < m; i++)
    cin >> flats[i];
  int ans = 0;
  bool ok = true;
  for(int i = 0; i < m-1; i++) {
    if (ok){
      ok = !ok;
      if (flats[i] == 1 || flats[i+1] == 1)
        ans++;
    }
    else {
      ok = !ok;
    }
  }
  cout << ans << endl;
  return 0;
}
