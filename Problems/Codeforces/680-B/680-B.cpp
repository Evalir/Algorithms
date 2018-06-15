#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
	int n, a;
	cin >> n >> a;
	--a;
	vector<int> cit(n);
	for(int& i : cit)
		cin >> i;
	int l = a, r = a;
	int ans = 0;
	while(l < n || r >= 0) {
		if (l < n && r >= 0) {
			if (cit[l] && cit[r]) {
				//cerr << l << ' ' << r << endl;
				if (l == r)
					ans++;
				else
					ans += 2;
			}
		}
		else if (l >= n) {
			if (cit[r]) {
				//cerr << l << ' ' << r << endl;
				ans++;
			}
		}
		else if (r < 0) {
			if (cit[l]) {
				//cerr << l << ' ' << r << endl;
				ans++;
			}
		}
		++l,--r;
	}

	cout << ans << endl;
	return 0;


}