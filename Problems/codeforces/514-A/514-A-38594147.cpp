#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
typedef unsigned long long ull;
int main() {
	ull n;
	cin >> n;
	string s = to_string(n);
	for(int i = s.size()-1; i >= 0; i--) {
		int t = n % 10;
		int nt = 9 - t;
		if (i == 0) {
			if (nt == 0)
				continue;
		}
		if (nt + '0' < s[i]) {
			s[i] = nt + '0';
			n /= 10;
		}
		else {
			n /= 10;
			continue;
		}
	}
	cout << s << endl;
	return 0;
}