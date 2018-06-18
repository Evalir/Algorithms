#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll dp[1010][5];
ll b[1010],h[1010],p[1010];
int n,m;
ll go(int pt, int cap) {
	if (pt > n-1 || cap > 3)
		return 0;
   	
   	if (dp[pt][cap] != -1)
   		return dp[pt][cap];
   	
   	ll x = abs(b[pt])+abs(h[pt])+abs(p[pt]) + go(pt+1,cap+1);
   	ll y = go(pt+1,cap);
   	ll ans = 0;
   	ans = max(x,y);
   	dp[pt][cap] = ans;
   	return ans;

}

int main() {
	for(int i = 0; i < 1001; i++)
		for(int j = 0; j < 3; j++)
			dp[i][j] = -1;
	cin >> n >> m;
	for(int i = 0; i < n; i++)
		cin >> b[i] >> h[i] >> p[i];
	ll ans = go(0,0);
	cout << ans << endl;
	return 0;


}