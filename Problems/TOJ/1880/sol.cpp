#include <bits/stdc++.h>
using namespace std;

int main() {
	map<int,int> anw;
	for(int i = 0; i < 3; i++) {
		int n;
		cin >> n;
		set<int> a;
		for(int j = 0; j < n; j++) {
			int x;
			cin >> x;
			a.insert(x);
		}
		for(auto k : a) anw[k]++;
	}
	int ans = 0;
	for(auto i : anw) {
		if (i.second >= 3) ans++;
	}
	cout << ans << endl;
}
