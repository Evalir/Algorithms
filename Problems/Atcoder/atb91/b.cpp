#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	multiset<string> A;
	while(n--) {
		string S;
		cin >> S;
		A.insert(S);
	}
	int m;
	cin >> m;
	multiset<string> B;
	int ans = 0;
	while(m--) {
		string S;
		cin >> S;
		B.insert(S);
	}
	for(auto X : A) {
		ans = max(ans, (int)A.count(X) - (int)B.count(X));
	}
	cout << ans << endl;
	return 0;

}