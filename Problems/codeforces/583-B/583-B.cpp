#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	vector<int> V(n);
	vector<bool> F(n);
	for(int i = 0; i < n; i++)
		cin >> V[i];      

	int ans = 0;
	int curr = 0;
	while(curr < n) {
		int idx = 0;
		while(idx < n) {
			if (curr >= V[idx] && !F[idx])
				++curr, F[idx] = !F[idx];
			if (curr >= n)
				break;
			++idx;
		}
		if (curr >= n)
			break;
		++ans, --idx;
		while(idx >= 0) {
			if (curr >= V[idx] && !F[idx])
				++curr, F[idx] = !F[idx];
			if (curr >= n)
				break;
			--idx;
		}
		if (curr >= n)
			break;
		++ans;

	}
	cout << ans << endl;
	return 0;

}