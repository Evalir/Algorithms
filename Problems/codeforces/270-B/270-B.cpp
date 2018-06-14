#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,k;
	cin >> n >> k;
	vector<int> a(n);
	for(int& i : a)
		cin >> i;
	sort(a.begin(),a.end());
	int ans = 0;
	for(int i = n -1; i >= 0; i -= k) {
	 	ans += 2 * (a[i]-1);
	}
	cout << ans << endl;
	return 0;
}