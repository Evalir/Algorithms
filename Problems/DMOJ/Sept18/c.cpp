#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, k;
	cin >> n >> k;
	vector<int> s(n), z;
	for(auto &t : s) cin >> t;
	vector<set<int>> pos(n+1);
	for(int i = 0; i < n; i++) {
		for(int j = i; j < n; j += k) {
			pos[s[i]].insert(j);
		}
		for(int j = i; j >= 0; j -= k) {
			pos[s[i]].insert(j);
		}
	}
	for(int i = 0; i < n; i++) {
		if (pos[s[i]].find(s[i]-1) == pos[s[i]].end()) {
			cout << "NO" << endl;
			return 0;
		}
	}
	cout << "YES" << endl;
	return 0;
}
