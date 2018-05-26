#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	string s;
	cin >> s;
	int ans = 0;
	for(int i = 0; i < n; i++) {
		if (i == 0 && s[i] == '?')
			ans++;
		else {
		 if (s[i] == '?' && s[i-1] != '?')
		 	ans++;
		}

	}
	if (ans > 2)
		cout << "Yes" << endl;
	else
		cout << "No" << endl;

	return 0;

}