#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	string S;
	cin >> n >> S;
	int ans = 0;
	for(int i = 0; i < n; i++) {
		set<char> a,b;
		for(int j = 0; j < n; j++) {
			if (j < i)
				a.insert(S[j]);
			else
				b.insert(S[j]);
		}
		int cnt = 0;
		for(auto x : a) {
			if (b.count(x) > 0)
				cnt++;
		}
		ans = max(ans, cnt);
	}
	cout << ans << endl;
}
