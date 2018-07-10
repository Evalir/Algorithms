#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int dp[8000][6];
int t,n,k;

int joa(int sum, int ch) {
	if (sum < 0)
		return 0;
	if (sum == 0)
		return 1;
	if (dp[sum][ch] != -1)
		return dp[sum][ch];

	int ans = 0;
	//use num and ++
	for(int i = 1; i <= k; i++)
		ans = joa(sum-i, i);
	dp[sum][ch] = ans;
	return ans;
}

int main() {
	cin >> t;
	while(t--) {
			for(int j = 0; j <= 7997; j++) {
            	for(int z = 0; z <= 5; z++) {
            	 	dp[j][z] = -1;
            	}
        	}
		cin >> n >> k;
		int anw = joa(n,0);
		cout << anw << endl;
	}
	return 0;

}