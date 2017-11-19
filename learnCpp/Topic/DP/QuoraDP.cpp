/*
https://www.quora.com/Are-there-any-good-resources-or-tutorials-for-dynamic-programming-DP-besides-the-TopCoder-tutorial
*/

#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <stack>
#include <queue>
#include <cmath>
#include <algorithm>
#include <bitset>
#include <list>
#define INF (int)1e9
using namespace std;
typedef long long llong;
typedef unsigned long long uint64;
typedef vector<int> VI;
typedef vector<VI> VII;

int N;
VI wines;

int memo[N][N] = { };
int joa(int L, int R) {
	if (L > R)
		return 0;

	if (mem[N][N] != 0)

	int year = N - (R - L + 1) + 1;

	return max(joa(L+1, R) + year * wines[L], joa(L, R-1) + year * wines[R]); 
}

int main() {
	cin >> N;

	for(int i = 0; i < N; i++) {
		int x;
		cin >> x;
		wines.push_back(x);
	}
	
	int profit = joa(0, N-1);

	cout << profit << endl;

	return 0;
}