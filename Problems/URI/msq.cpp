#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
		int a, b;
		cin >> a >> b;
		for(int i = a; i <= b; i++) {
			cout << i;
		}
		for(int i = b; i >= a; i--) {
			int n = i;
			while (n > 0) {
				cout << n % 10;
				n /= 10;
			}
		}
		cout << endl;
	}

	return 0;
}