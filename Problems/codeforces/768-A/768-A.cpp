#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	vector<long long> a(n);
	for(long long& i : a)
		cin >> i;
	sort(a.begin(), a.end());
	long long lown = a[0];
	long long highn = a[n-1];
	int ans = 0;
	for(long long& i : a)
		if (i != lown && i != highn)
			++ans;
	cout << ans << endl;
	return 0;
}