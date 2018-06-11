#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <set>
using namespace std;
int dp[1000100];
int joa(int money) {
  if (money <= 0)
    return 0;
  int ans = (int)1e5;
  if (dp[money] != -1)
    return dp[money];

  ans = min(ans, 1 + joa(money-1));
  for(int i = 6; i <= money; i *= 6)
    ans = min(ans, 1 + joa(money-i));
  for(int i = 9; i <= money; i *= 9)
    ans = min(ans, 1 + joa(money-i));
  dp[money] = ans;
  return ans;
}
int main() {
  int n;
  cin >> n;
  for(int i = 0; i <= 100010; i++)
    dp[i] = -1;
  int ans = 0;
  for(int i = 0; i <= n; ++i)
    ans = joa(i);
  cout << ans;
  return 0;
}
