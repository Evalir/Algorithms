#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
	int T;
	cin >> T;
	while(T--) {
		int N;
		cin >> N;
		int ans = 0;
		while (N > 0) {
			ans += N % 10;
			N /= 10;
		}
		cout << ans << endl;
	}
	return 0;
}
