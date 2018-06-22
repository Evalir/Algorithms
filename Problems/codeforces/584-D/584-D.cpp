#include <bits/stdc++.h>
using namespace std;

bool isPrime(int k) {
	for(int i = 2; i*i <= k; i++) {
		if (k % i == 0)
			return false;
	}
	return true;
}

int main() {
	int n;
	cin >> n;
	int a;
	if (isPrime(n)) {
		cout << 1 << endl << n << endl;
		return 0;
	}
	for(int k = n-1; k >= n-300; k--) {
		if (isPrime(k)) {a = k;
			for(int x = n-a; x >= 2; x--) {
	    		if (isPrime(x) && isPrime(n-a-x) && n-a-x > 1) {
	    			cout << 3 << endl << a << ' ' << x << ' ' << n-a-x << endl;
	    			return 0;
	    		}
			}	
		}
	}
	
	return 0;
}