#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	vector<int> V(n);
	for(int i = 0; i < n; i++) cin >> V[i];
	int cnt = 1;
	for(int i = 0; i < n; i++) {
		if (i) {
			if (V[i-1] == V[i]) cnt++;
			else {
				cout << cnt << ' ' << V[i-1] << ' ';
				cnt = 1;
			}
		}
	}
	cout << cnt << ' ' << V[n-1] << endl;
	return 0;
}
