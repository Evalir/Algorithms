#include <iostream>
using namespace std;

int A[102][102];
int P[102][102];

int main() {
	int n, m;
	cin >> n >> m;
	for(int i = 1; i <= n; i++) {
		for(int j = 1; j <= m; j++) {
			cin >> A[i][j];
		}
	}
	for(int i = 1; i <= n; i++) {
		for(int j = 1; j <= m; j++) {
			P[i][j] = A[i][j] + P[i - 1][j] + P[i][j - 1] - P[i - 1][j - 1];
		}
	}
	int r1, c1, r2, c2;
	while(cin >> r1 >> c1 >> r2 >> c2) {
		int sum = P[r2][c2] - P[r1 - 1][c2] - P[r2][c1 - 1] + P[r1 - 1][c1 - 1];
		cout << sum << endl;
	}

}