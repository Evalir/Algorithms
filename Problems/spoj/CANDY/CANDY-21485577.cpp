#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int main() {

	while(true) {
		int candy[1000000];
		int n;
		cin >> n;
		if (n == -1)
			return 0;

		int ans = 0;
		int sum = 0;
		int maxi = -1;
		for(int i = 0; i < n; i++) {
			cin >> candy[i];
			sum += candy[i];
		}
		int med = sum/n;
		if (sum % n != 0)
			cout << -1 << endl;
		else {
			for(int i = 0; i < n; i++) {
				if(med-candy[i] > 0)
					ans+= med-candy[i];
			}
			cout << ans << endl;
		}
	}
	return 0;
}