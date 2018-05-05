#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;
const int mod = 1000000007;
#define N (int)1e7+2

int dp[2][N];
int vis[2][N];

int joa(int same, int steps) {
	if(steps == 1) {
		if(same) return 0;
		return 1;
	}

	int &ans = dp[same][steps];
	if(vis[same][steps])
		return ans;
	vis[same][steps] = 1;
	if(same == 1)
		return ans = (3LL*joa(1-same, steps-1))%mod;
	else
		return ans = (2LL*joa(0, steps-1) + joa(1, steps-1))%mod;
}

int main() {

	int i,n,k,j;
	cin >> n;
	cout << joa(1, n) << endl;

	return 0;
} 