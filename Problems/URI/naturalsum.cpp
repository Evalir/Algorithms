#include <iostream>
using namespace std;

int main() {
	long long a, b;
	cin >> a >> b;
	a--;
	long long ans = (((b*(b+1))/2) - ((a*(a+1))/2));
	cout << ans << endl;
	return 0;
} 