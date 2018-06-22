#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	int n;
	scanf("%d", &n);
	vector<ll> p(n);
	for(ll& i : p)
		scanf("%d", &i);
	ll ans = 0;
	ll wall = n;
	for(int i = n - 1; i >= 0; i--) {
		if (i < wall)
			++ans;
		wall = min(wall, i-p[i]);	
	}
	printf("%d\n",ans);
	return 0;
}