
#include <vector>
#include <algorithm>
#include <cmath>
#include <iostream>
using namespace std;

long dp[100010];
long judges[100010];

long go(int idx, int prevTaken) {
		long ans = 0;
		if (idx < 0)
			return 0;
			
		if (dp[idx] != -1)
			return dp[idx];
			
		if(!prevTaken) {
			ans = max(ans, (judges[idx]*idx) + go(idx-1, 1));
			cout << "took and ans is " << ans << endl;
		}
		
		ans = max(ans, go(idx-1,0));
		cout << "ignored and ans is " << ans << endl;
		dp[idx] = ans;
		return ans;
	}

	int main() {
		int n;
		cin >> n;
		long maxval = 0;
		for(int i = 0; i <= 100008; i++)
			judges[i] = 0;
		for(int i = 0; i < n; i++) {
			long x; cin >> x;
			judges[x]++;
			maxval = max(maxval, x);
		}
		for(int i = 0; i <= 100008; i++)
			dp[i] = -1;
		long ans = go(maxval,-1);
		cout << ans << endl;
		return 0;
	}
