#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
typedef long long ull;
using namespace std;

int main() {
	ull n, k;
	cin >> n >> k;
	ull nz = 0;
	ull tn = n;
	ull n2 = 0, n5 = 0;
	tn = n;
	while(tn % 2 == 0) {
		n2++;
		tn /= 2;
	}
	tn = n;
	while(tn % 5 == 0) {
		n5++;
		tn /= 5;
	}
	nz = min(n2,n5);
	if (nz >= k) {
		cout << 0 << endl;
		return 0;
	}
	if (abs(k-nz) <= abs(n2-n5)) {
		cout << k-nz << endl;
		return 0;
	}
	else {
		cout << abs(n2-n5) + (abs(k-abs(n2-n5)-nz))*2 << endl;
	}
	return 0;
}