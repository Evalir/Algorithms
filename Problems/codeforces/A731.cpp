#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
	string S;
	cin >> S;
	int ans = 0;
	char cchar = 'a';
	for(int i = 0; i < S.size(); i++) {
		ans += min(abs(cchar-S[i]), 26-(abs(cchar-S[i])));
		cchar = S[i];
	}
	cout << ans << endl;
	return 0;
}
