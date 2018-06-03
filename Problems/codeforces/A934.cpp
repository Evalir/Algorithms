#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
	int n, m;
	cin >> n >> m;
	vector<ll> t(n),b(m);
	for(int i = 0; i < n; i++)
		cin >> t[i];
	for(int i = 0; i < m; i++)
		cin >> b[i];    

	ll ans = (1LL<<60)-1;
	for(int i = 0; i < n; i++) {
		ll curr = -((1LL<<60)-1);
		for(int j = 0; j < n; j++) {
			if (i != j)
				for (int k = 0; k < m; k++) {
					curr = max(curr,t[j]*b[k]);
				}	
		}
		ans = min(curr,ans);
	}
	cout << ans << endl;
	return 0;
}