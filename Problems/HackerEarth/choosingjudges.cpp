#include <vector>
#include <algorithm>
#include <cmath>
#include <iostream>
using namespace std;

long dp[10010];
int judges[10010];

long go(int idx) {
	int ans = 0;
	if (idx < 0)
		return 0;
		
	if (dp[idx] != -1)
		return dp[idx];
		
	{
		//take
		int x = judges[idx] + go(idx-2);
		int y = go(idx-1);
		ans = max(x,y);
	}
	dp[idx] = ans;
	return ans;
}

int main() {
	int T;
	cin >> T;
	int ka = 0;
	while(T--) {
		ka++;
		int n;
		cin >> n;
		for(int i = 0; i < n; i++) {
			cin >> judges[i];
		}
		for(int i = 0; i < n+10; i++)
			dp[i] = -1;
		int ans = go(n-1);
		cout << "Case " << ka << ": " << ans << endl;
	}
	return 0;
}
