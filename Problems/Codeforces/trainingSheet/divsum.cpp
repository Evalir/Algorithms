#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int main() {
	long long n;
	bool ok = false;
	bool d2 = false;
	sum = 0;

	for(int i = 2; i*i <= n; i++) {
		if (n % i == 0) {
			ok = true;
			sum += i;
			if (i == 2) {
				d2 = true;
			}
		}
	}
	if (d2) {
		sum += n/2;
	}
	if (ok) {
		cout << sum + 1 + n;
	}
	else {
		cout << n+1 << endl;
	}
	return 0;
}