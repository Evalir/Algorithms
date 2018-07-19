#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
  int n,m;
  cin >> n >> m;
  int ans = 0;
  int curr = 0;
  while(m--) {
    string S;
    cin >> S;
    int cnt = 0;
    for(int i = 0; i < S.size(); i++)
      if (S[i] == '1')
        cnt++;
    if (cnt == n) {
      ans = max(ans,curr);
      curr = 0;
    }
    else
      ++curr;
      ans = max(curr,ans);
  }
  cout << ans << endl;
  return 0;


}
