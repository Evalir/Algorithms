#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
	long long p, y;
	cin >> p >> y;
	
	long long ans = y;
	bool prime = true;
	
	if (p < 300) {
		while (ans > p) {
			for(long long i = 2; i <= p; i++) {
				if (ans % i == 0) {
					prime = false;
					break;
				}
			}
			if (!prime) {
				ans--;
				prime = true;
			}
			else {
				cout << ans << endl;
				return 0;
			}
		}
		cout << -1 << endl;
		return 0;
	}
	else {
		while (ans > p) {
			for(long long i = 2; i*i <= y; i++) {
				if (ans % i == 0 && i != ans && i <= p) {
					prime = false;
					break;
				}
			}
			if (ans == y-300) {
				cout << -1 << endl;
				return 0;
			}
			if (!prime) {
				ans--;
				prime = true;
			}
			else {
				cout << ans << endl;
				return 0;
			}
			
		}
		cout << -1 << endl;
		return 0;
	}
	
	return 0;
	
}
