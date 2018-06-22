#include <vector>
#include <algorithm>
#include <iostream>
#include <cmath>
using namespace std;

using ll = long long;

ll dp[1000][1000];
ll w[1000];
ll fun[1000];
int k, n;

ll joa(int cap, int idx) {
	ll ans = 0;
	
	if (cap > k || idx > n-1)
		return 0;
	
	if (dp[cap][idx] != -1)
		return dp[cap][idx];

	if(cap + w[idx] > k)
		ans = joa(cap, ++idx);

	else if (cap + w[idx] <= k) {
		ll x = fun[idx] + joa(cap + w[idx], ++idx);
		ll y = joa(cap, ++idx);
		ans = max(x,y);		
	}	
	dp[cap][idx] = ans;
	return ans;
}

int main() {
	while(true) {
		cin >> k >> n;
		if (n == 0 && k == 0)
			break;
		for(int i = 0; i < 600; i++)
			for(int j =0; j < 600; j++)
				dp[i][j] = -1;
		for(int i = 0; i < n; i++)
			cin >> w[i] >> fun[i];
		ll anw = joa(0,0);
		cout << anw << endl;

	}
	return 0;
}