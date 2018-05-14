#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
	int T;
	cin >> T;
	while(T--) {
		long n;
		cin >> n;
		vector<int> dig;
		while(n > 0) {
			dig.push_back(n%10);
			n /= 10;
		}
		cout << dig[0] + dig[dig.size()-1] << endl;
	}
	return 0;
}
