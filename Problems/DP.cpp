#include <iostream>
#include <vector>
#include <algorithm>
#define INF 1000000007
using namespace std;


unsigned long long go(int i, int j) {
	unsigned long long mat[1000][1000];
	for(int i = 0; i < 100; i++) {
		mat[i][0] = 1;
	}
	for(int i = 0; i < 100; i++) {
		mat[0][i] = 1;
	}
	for(int k = 1; k <= i; k++) {
		for(int c = 1; c <= j; c++) {
			mat[k][c] = mat[k-1][c] + mat[k][c-1];
		}
	}

	return mat[i][j];
}

int main() {
	cout << go(1,1);
	return 0;
}