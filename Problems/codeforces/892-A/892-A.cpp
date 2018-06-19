#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	vector<int> cap(n), rem(n);
	for(int& i : rem)
		cin >> i;
	for(int& i : cap)
		cin >> i;
	sort(cap.begin(),cap.end(), greater<int>());
	long long ans = 0;
	for(int& i : rem)
		ans += i;
	long long capz = cap[0] + cap[1];
	capz < ans ? puts("NO") : puts("YES");
	return 0;
}