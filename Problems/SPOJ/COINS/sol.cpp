#include <bits/stdc++.h>
using namespace std;
using Long = long long;
unordered_map<Long,Long> rem;

Long dp(Long n) {
	if (n == 0) return n;
	if(rem[n]) return rem[n];
	Long x = dp(n/2) + dp(n/3) + dp(n/4);
	rem[n] = max(n,x);
	return rem[n];
}

int main() {
	Long n;
	while(scanf("%lld", &n) != EOF) {
		cout << dp(n) << endl;
	}
	return 0;
}
