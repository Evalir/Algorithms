#include <iostream>
#include <vector>
using namespace std;

int main() {
	int n;
	cin >> n;
	vector<int> pb(n);
	int sum = 0, ans = 0;
	for(int i = 0; i < n; i++) {cin >> pb[i]; sum += pb[i];}
	int mid;
	sum % 2 != 0 ? mid = (sum/2) + 1 : mid = sum/2;
	int cnt = 0;
	for(int i = 0; i < n; i++) {
		cnt += pb[i];
		ans++;
		if (cnt >= mid)
			break;
	}
	cout << ans << endl;
	return 0;
}