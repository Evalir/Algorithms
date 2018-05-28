#include <iostream>
#include <cmath>
using namespace std;

int main() {
	while(true) {
		double t;
		cin >> t;
		if (t == 0.00)
			break;
		double acc = 0;
		double i = 1;
		int cnt = 0;
		while(acc < t) {
			cnt++;
			double ans = 1.0/(i+1.0);
			acc += ans;
			i++;
		}
		cout << cnt << " card(s)" << endl;
	}
	return 0;
}