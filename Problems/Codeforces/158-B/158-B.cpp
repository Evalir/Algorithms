#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
	int n;
	cin >> n;
	vector<int> k(5,0);
	for(int i = 0; i < n; i++) {
		int x;
		cin >> x;
		k[x]++;
	}
	int ans = 0;
	ans += k[4];
	k[4] = 0;
	//group 3
	while(k[3] > 0 && k[1] > 0) {
		++ans,--k[3],--k[1];
	}
	if (k[3] > 0)
		ans += k[3], k[3] = 0;
	while(k[2] > 0 && k[1] > 1) {
		++ans, --k[2], k[1] -= 2;
	}
	while(k[2] > 0 && k[1] > 0) {
		++k[3], --k[2], --k[1];
	}
	while(k[3] > 0 && k[1] > 0) {
		++ans,--k[3],--k[1];
	}
	if (k[3] > 0)
		ans += k[3];
	while(k[2] > 1)
		++ans, k[2] -= 2;
	if (k[2] > 0)
		ans += k[2];

	if(k[1] > 3) {
		ans += (k[1]/4);
		k[1] = k[1]%4;
	}
	if (k[1] > 0) {
		ans++;
	}

	cout << ans << endl;

	return 0;
}