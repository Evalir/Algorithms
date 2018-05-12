#include <iostream>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	long n, k;
	int ans = 0;
	cin >> n >> k;
	for(int i = 0; i < n; i++) {
		long x;
		cin >> x;
		if (x % k == 0)
			ans++;
	}
	cout << ans << endl;
	return 0;
}
