#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
	int n, price = 1e9;
	int total = 0;
	cin >> n;
	while (n--) {
		int a, b;
		cin >> a >> b;
		price = min(price, b);
		total += price * a;
	}
	
	cout << total << endl;
	return 0;
}