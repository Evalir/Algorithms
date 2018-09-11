#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	int ans = 0;
	while(n--) {
		string s;
		cin >> s;
		if (s.find("+one") != -1) ans += 2;
		else ans++;
	}
	if (ans == 11) ans++;
	cout << 100LL*(ans+2) << endl;
}
