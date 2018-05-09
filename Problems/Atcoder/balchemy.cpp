#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
	int n;
	cin >> n;
	int x;
	cin >> x;
	vector<int> dn(n);
	int ans = 0;
	for(int i = 0; i < n; i++) {
		cin >> dn[i];
	}
	sort(dn.begin(), dn.end());
	for(int i = 0; i < n; i++) {
		 x-=dn[i];
		 ans++;
	}
	ans += x/dn[0];
	
	cout << ans << endl;
	return 0;
}
