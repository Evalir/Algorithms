#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
	int S;
	cin >> S;
	while(S--) {
		int n,r;
		cin >> n >> r;
		ll ans = 0;
		ll maxh = 0;
		for(int i = 0; i < n; i++) {
		 	int q; cin >> q;
		 	if (q > maxh)
		 	 	maxh = q, ++ans;		
		}
		cout << ans*r << endl;
	}
	return 0;
}