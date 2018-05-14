#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
	int T;
	cin >> T;
	while(T--) {
		string A;
		cin >> A;
		int ans = 0;
		for(auto x : A) {
			if (x == '4')
				ans++;
		}
		cout << ans << endl;
	}
	return 0;
}
