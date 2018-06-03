#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
	int n,m;
	cin >> n >> m;
	
	vector<int> ac(n);
	vector<int> wa(m);

	for(int i = 0; i < n; i++)
		cin >> ac[i];

	for(int i = 0; i < m; i++)
		cin >> wa[i];

	int ans = 0;
	for(int i = 0; i < 100; i++) {
		bool can = true;
		for(int j = 0; j < n; j++) {
			if (ac[j] > i) {
				can = false;
			}
		}
		if (!can)
			continue;
		can = false;
		for(int j = 0; j < n; j++) {
			if (2*ac[j] <= i) {
				can = true;
			}
		}
		if (!can) {
			continue;
		}
		for(int j = 0; j < m; j++) {
			if (wa[j] <= i) {
				can = false;
			}
		}
		if (!can)
			continue;
		else
			{
				cout << i << endl;
				return 0;
			}
	}
	cout << -1 << endl;
	return 0;
}