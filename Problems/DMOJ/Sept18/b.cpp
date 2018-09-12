#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	scanf("%d", &n);
	vector<int> s(n), z;
	int fwc = -1, lwc = -1;
	for(int i = 0; i < n; i++) {
		scanf("%d", &s[i]);
		if (s[i]) z.push_back(s[i]);
		if (!s[i] && fwc == -1) fwc = i;
		if (!s[i]) lwc = i;
	}
	bool ok = true;
	for(int i = 1; i < (int)z.size(); i++) {
		if (z[i-1] > z[i]) ok = false;
	}
	if (!ok) {
		cout << "NO" << endl;
		return 0;
	}
	bool sw = false;
	int minn = 1e9, maxn = -1;
	for(int i = fwc; i <= lwc; i++) {
		if (s[i]) {
			minn = min(minn, s[i]);
			maxn = max(maxn, s[i]);
		}
	}
	if (abs(maxn-minn) > 1 && !(maxn == -1 && minn == 1e9)) {
		cout << "NO" << endl;
		return 0;
	}
	for(int i = 0; i < n; i++) {
		if (s[i] == maxn) sw = true;
		if (!s[i] && sw) {
			if (minn - maxn == 0) continue;
			cout << "NO" << endl;
			return 0;
		}
	}
	cout << "YES" << endl;
	return 0;
}
