#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int main() {
	while(true) {
		int a, b;
		cin >> a >> b;
		if (a < 1 || b < 1)
			break;
		int ans = 0;
		for(int i = min(a,b); i <= max(a,b); i++) {
			cout << i << ' ';
			ans += i;
		}
		cout << "sum =" << ans << endl;
	}
	return 0;
}