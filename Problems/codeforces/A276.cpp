#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

struct rs {
	ll f,t;
};
int main() {
	ll n, k;
	cin >> n >> k;
	vector<rs> V(n);
	for(int i = 0; i < n; i++)
		cin >> V[i].f >> V[i].t;

	ll ans = -1000000000;
	for(int i = 0; i < n; i++) {
		if(V[i].t <= k)
			ans = max(ans,V[i].f);
		else
			ans = max(ans, V[i].f-(V[i].t-k));	
	}

	cout << ans << endl;
	return 0;

}