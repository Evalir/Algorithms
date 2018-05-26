#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main() {
	int n,m;
	cin >> n >> m;
	if (m == 0)
		cout << 0 << ' ';
	for(int i = 1; i <= n; i++) {
		int k = i;
		while(k > 0) {
			if (k % 10 == m) {
				cout << i << ' ';
				break;
			}
			k /= 10;
		}
	}

	return 0;
}