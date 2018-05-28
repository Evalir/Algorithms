#include <iostream>
using namespace std;
typedef unsigned long long ull;
int main() {
	ull n;
	cin >> n;
	++n;
	if (n == 1) {
	    cout << 0 << endl;
	    return 0;
	
	}
	ull ans = n % 2 == 0 ? n/2 : n;
	cout << ans << endl;
}