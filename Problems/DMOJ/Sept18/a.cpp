#include <bits/stdc++.h>
using namespace std;

int main() {
	vector<int> s(3), z(3);
	for(int i = 0; i < 3; i++) {
		cin >> s[i];
	}
	z = s;
	sort(z.begin(), z.end());
	if (s == z) puts("Good job!");
	else puts("Try again!");
	return 0;
}
