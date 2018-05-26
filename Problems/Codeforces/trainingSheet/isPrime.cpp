#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
	long long a;
	cin >> a;
	if (a == 0 || a == 1) {
		cout << "NO" << endl;
		return 0;
	}
	if (a == 3) {
		cout << "YES" << endl;
		return 0;
	}
	for(long long i = 2; i * i <= a; i++) {
		if (a % i == 0) {
			cout << "NO" << endl;
			return 0;
		}
	}
	cout << "YES" << endl;
	return 0;
}