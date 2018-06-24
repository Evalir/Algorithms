#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int dp[8000];
int t,n,k;

int joa(int sum) {
	if (sum < 0)
		return 0;
	if (sum == 0)
		return 1;
	if (dp[sum] != -1)
		return dp[sum];

	int ans = 0;
	//use num and ++
	for(int i = 1; i <= k; i++)
		ans = joa(sum-i);
	dp[sum] = ans;
	return ans;
}

int main() {
	cin >> t;
	while(t--) {
			for(int j = 0; j <= 7998; j++) {
            	 	dp[j] = -1;
        	}
		cin >> n >> k;
		int anw = joa(n);
		cout << anw << endl;
	}
	return 0;

}
