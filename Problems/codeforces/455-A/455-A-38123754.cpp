#include <vector>
	#include <algorithm>
	#include <cmath>
	#include <iostream>
	using namespace std;

long long dp[1000010];
long long freq[1000010];
long long go(int idx) {
	long long ans = 0;
	if (idx < 0)
		return 0;
			
	if (dp[idx] != -1)
		return dp[idx];
			
	{
		//take
		long long x = (freq[idx]*idx) + go(idx-2);
		long long y = go(idx-1);
		ans = max(x,y);
	}
	dp[idx] = ans;
	return ans;
	}

	int main() {
		int n;
		cin >> n;
		for(int i = 0; i <= 1000005; i++)
			freq[i] = 0;
		for(int i = 0; i < n; i++) {
			long long x; cin >> x;
			freq[x]++;
		}
		for(int i = 0; i <= 1000005; i++)
			dp[i] = -1;
		long long ans = go(100010);
		cout << ans << endl;
		return 0;
	}