#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int dp[6][8000];
int t,n,k;

int joa(int sum, int ch) {
	if (sum < 0)
		return 0;
	if (sum == 0)
		return 1;
	if (dp[ch][sum] != -1)
		return dp[ch][sum];

	int ans = 0;
	//use num and ++
	for(int i = 1; i <= k; i++)
		ans = joa(sum-i, i);
	dp[ch][sum] = ans;
	return ans;
}

int main() {
	cin >> t;
	while(t--) {
			for(int j = 0; j <= 5; j++) {
            	for(int z = 0; z <= 7997; z++) {
            	 	dp[j][z] = -1;
            	}
        	}
		cin >> n >> k;
		int anw = joa(n,0);
		cout << anw << endl;
	}
	return 0;

}