#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
	string A, B;
	cin >> A >> B;
	int ans = 1;
	int k = 0;
	for(int i = 0; i < B.size(); i++) {
		if (B[i] == A[k]) {
			k++;
			ans++;
		}
	}
	cout << ans << endl;
	return 0;
}
