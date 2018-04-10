#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
using namespace std;
#define INF 1000000007

int dp[110][4];
int a[110];
int n;
//recursive implementation

int main() {
	cin >> n;

	for(int i = 0; i < n; i++) {
		cin >> a[i];
	}

	for(int i = 0; i < 100; i++) {
		dp[i][0] = INF;
		dp[i][1] = INF;
		dp[i][2] = INF;
	}

	//rest
	dp[0][0] = 1;
	if (a[0] == 1 || a[0] == 3) {
		dp[0][1] = 0;	
	}
	if (a[0] == 2 || a[0] == 3) {
		dp[0][2] = 0;
	}

	cout << joa(n-1,a[n-1]);
	for(int i = 1; i < n; i++) {
		//always calculate rest
		dp[i][0] = 1 + min(dp[i-1][0], min(dp[i-1][1], dp[i-1][2]));
		
		if (a[i] == 1 || a[i] == 3) {
			dp[i][1] = min(dp[i-1][0], dp[i-1][2]);
		}
		if (a[i] == 2 || a[i] == 3) {
			dp[i][2] = min(dp[i-1][0], dp[i-1][1]);
		}
	}

	cout << min(dp[n-1][0],min(dp[n-1][1],dp[n-1][2])) << endl;

	return 0;
}