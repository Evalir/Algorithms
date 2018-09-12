#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	map<string, int> f;
	int ans = 0;
	for(int i = 0; i < n; i++) {
		string s;
		getline(cin,s);
		f[s]++;
		ans = max(ans, f[s]);
	}
	string b;
	for(auto i : f) {
		if (i.second > ans) {
			b = i.first;
			ans = i.second;
		}
	}
	for(auto i : f) {
		if (i.second == ans) {
			cout << i.first << endl;
			return 0;
		}
	}
	return 0;
}
