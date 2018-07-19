#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

<<<<<<< HEAD
int dp[8000][6];
=======
int dp[8000];
>>>>>>> dde0c29d372dac11fcfdca532374a8092b36831c
int t,n,k;

int joa(int sum) {
	if (sum < 0)
		return 0;
	if (sum == 0)
		return 1;
<<<<<<< HEAD
	if (dp[sum][ch] != -1)
		return dp[sum][ch];
=======
	if (dp[sum] != -1)
		return dp[sum];
>>>>>>> dde0c29d372dac11fcfdca532374a8092b36831c

	int ans = 0;
	//use num and ++
	for(int i = 1; i <= k; i++)
<<<<<<< HEAD
		ans = joa(sum-i, i);
	dp[sum][ch] = ans;
=======
		ans = joa(sum-i);
	dp[sum] = ans;
>>>>>>> dde0c29d372dac11fcfdca532374a8092b36831c
	return ans;
}

int main() {
	cin >> t;
	while(t--) {
<<<<<<< HEAD
			for(int j = 0; j <= 7997; j++) {
            	for(int z = 0; z <= 5; z++) {
            	 	dp[j][z] = -1;
            	}
=======
			for(int j = 0; j <= 7998; j++) {
            	 	dp[j] = -1;
>>>>>>> dde0c29d372dac11fcfdca532374a8092b36831c
        	}
		cin >> n >> k;
		int anw = joa(n);
		cout << anw << endl;
	}
	return 0;

}
