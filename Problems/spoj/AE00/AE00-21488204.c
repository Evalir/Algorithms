#include <iostream>
using namespace std;

int main() {
	int N;
	cin >> N;
	int ans = 0;
	for(int i = 1; i <= N; i++) {
		for(int k = 1; k*k <= i; k++) {
			if (i % k == 0)
				ans++;
		}
	}

	cout << ans;
	return 0;
}