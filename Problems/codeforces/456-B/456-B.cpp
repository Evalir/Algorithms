#include <bits/stdc++.h>
using namespace std;

using ll = long long;

ll kpow(int x, int y) {
	ll anw = 1;
	for(int i = 0; i < y; i++)
		anw *= x;
	return anw;
}

int main() {
	string S;
	cin >> S;
	int curr = 0;
	for(int i = 0; i < S.size(); i++) {
		int cn = S[i]-'0';
		curr *= 10;
		curr += cn;
		curr %= 4;
	}
	int ans = kpow(1, curr);
	ans += kpow(2, curr);
	ans += kpow(3, curr);
	ans += kpow(4, curr);
	cout << ans % 5 << endl;
	return 0;


}
