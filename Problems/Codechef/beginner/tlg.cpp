#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int n;
	cin >> n;
	int ans = 0, suma = 0, sumb = 0;
	vector<int> A(n),B(n);
	for(int i = 0; i < n; i++) {
		int x, y;
		cin >> x >> y;
		suma += x, sumb += y;
		A[i] = suma, B[i] = sumb;
	}
	int best = 0;
	bool lr = 1;
	for(int i = 0; i < n; i++) {
		if (A[i]-B[i] > best) {
			lr = 1;
			best = A[i]-B[i];
		} 
		else if (B[i]-A[i] > best) {
			lr = 0;
			best = B[i]-A[i];
		}
	}
	if (lr) {
		cout << 1 << ' ' << best << endl;
	}
	else
		cout << 2 << ' ' << best << endl;
	return 0;
}
