#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
	int n;
	string S;
	int ans = 0;
	int cnt = 0;
	cin >> n >> S;
	for(int i = 0; i < n; i++) {
		if (S[i] == 'x') {
			cnt++;
			if (cnt >= 3)
				ans++;
		}
		else if (S[i] != 'x')
			cnt = 0;
	}
	cout << ans << endl;
	return 0;
}
