#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int G,P,W;
int val[500],wei[1010];
int dp[200][2000];

int solve(int n, int cap) {
	int ans;
	if (n < 0 || cap <= 0)
		return 0;
	
	if (dp[n][cap] != -1)
		return dp[n][cap];

	if (wei[n] > cap)
		ans = solve(n-1,cap);
	if (wei[n] <= cap) {
		int x = val[n] + solve(n-1, cap - wei[n]);
		int y = solve(n-1,cap);
		ans = max(x,y);
	}
	dp[n][cap] = ans;
	return dp[n][cap];
}

int main() {
	int K = 0;
	cin >> G;
	while(G--) {
		K++;
		cin >> P >> W;
		for(int i = 0; i < P; i++) {
			cin >> val[i] >> wei[i];
		}
		for(int i = 0; i < 200; i++)
			for(int j = 0; j < 2000; j++)
				dp[i][j] = -1;
		int ans = solve(P-1, W);
		cout << "Galho " << K << ":\nNumero total de enfeites: " << ans << endl << endl; 
	}

	return 0;
}