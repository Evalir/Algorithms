#include <bits/stdc++.h>
using namespace std;

int main() {
 	int n,c;
	cin >> n >> c;
	vector<int> r(n);
	for(int i = 0; i < n; i++)
		cin >> r[i];
	int ans = 0;
	for(int i = 0; i < n-1; i++) {
		ans = max(ans, r[i]-r[i+1]-c);
	}
	cout << ans << endl;
	return 0;
}