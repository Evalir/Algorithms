#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
		unsigned long long n;
		cin >> n;
		cout << 10*(19+25*(n-1))+2 << endl;
	}
	return 0;
}