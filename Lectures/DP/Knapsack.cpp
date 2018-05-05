#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int wei[5] = {1,2,4,2,5};
int val[5] = {5,3,5,3,2};
int memo[1000][1000];
int knapsack(int pointer, int capacity) {
	int res;
	if (pointer < 0 || capacity <= 0 )
		return 0;

	if (memo[pointer][capacity] != -1)
		return memo[pointer][capacity];
	
	//skip item
	if (wei[pointer] > capacity)
		res = knapsack(pointer-1,capacity);
	//take item and not take at the same time
	if (wei[pointer] <= capacity) {
		int res1 = val[pointer] + knapsack(pointer-1, capacity-wei[pointer]);
		cerr << res1 << " is " << endl;
		int res2 = knapsack(pointer-1, capacity);
		cerr << res2 << " is " << endl;
		res = max(res1, res2);
	}
	memo[pointer][capacity] = res;
	return res;
}

int main() {
	for(int i = 0; i <= 100; i++) {
		for(int j = 0; j <= 100; j++) {
			memo[i][j] = -1;
		}
	}
	cout << knapsack(4,10);

	return 0;
}
