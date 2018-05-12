#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;
#define INF (int)-1e9-7
int dp[1010];
int memo[1010][1010];
vector<int> V = {23,12,15,3,21,25,29,32,20,55};
vector<int> rV = {INF,23,12,15,3,21,25,29,32,20,55};

int RecursiveLIS(int idx, int last_idx) {
	if (idx >= rV.size())
		return 0;
	if (memo[idx][last_idx] != -1)
		return memo[idx][last_idx];

	int ans = 0;

	//take
	int curr = 0;
	if (rV[last_idx] < rV[idx])
		curr = 1 + RecursiveLIS(idx+1, idx);
	
	ans = max(ans,curr);
	//not take
	curr = RecursiveLIS(idx+1,last_idx);
	ans = max(ans,curr);

	memo[idx][last_idx] = ans;
	return ans;
}

int solve(vector<int>& V) {
    for(int i = 0; i < V.size(); i++) {
    	dp[i] = 1;
    	for(int k = 0; k < i; k++) {
    		if (V[k] < V[i])
    			dp[i] = max(dp[i], dp[k]+1);
    	}
    }

    int ans = (int)-1e9-7;
    for(int i = 0; i < V.size(); i++) {
    	ans = max(ans, dp[i]);
    }
    return ans;
}

int main() {
	//comment for submission
    #ifndef ONLINE_JUDGE
    	freopen("input.txt", "r", stdin);
    	freopen("output.txt", "w", stdout);
 	#endif
    //LIS : 7
    int ans = solve(V);
    cout << ans << endl;

    for(int i = 0; i <= 1000; i++)
    	for(int j = 0; j <= 1000; j++)
    		memo[i][j] = -1;
    ans = RecursiveLIS(1,0);
    cout << "recursive lis: " << ans << endl;

}

/*
Longest Increasing Subsequence is a increasing subsequence that doesn't need to be adjacent, but can be obtained by erasing elements in between.
In this array
23 12 15 3 21 25 29 32 20 55
the longest increase subsequence is of length 7, being
12 15 21 25 29 32 55
It works by DP[i] being updated and moved forward by everything the nested for runs.
*/