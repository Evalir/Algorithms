#include <iostream>
using namespace std;
int main() {
	int n;
	while(true) {
		cin >> n;
		if (n == 0)
			break;
		int ans = 0;
		for(int i = n; i > 0; i--)
			ans += i*i;
		cout << ans << endl;
	}
	return 0;
}