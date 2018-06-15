#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vll;
int a,b,c;

int S(int i) {
	int n = i;
	int ans = 0;
	while(n > 0) {
		ans += n % 10;
		n /= 10;
	}
	return ans;
}

ll kpow(int r) {
	ll res = 1;
	for(int i = 1; i <= a; i++)
		res *= r;
	return res;	
}


bool calc(int i) {
	ll num = b*kpow(i) + c; 
	if (S(num b) == i && num < (int)1e9)
		return true;
	return false;
}

int main() {
	cin >> a >> b >> c;
	vll anw;
	int ans = 0;
	for(ll i = 1; i < 100; i++) {
		if (calc(i)) {
		 	++ans;
		 	anw.push_back(i);
		}
	}
	cout << ans << endl;
	for(ll& i : anw)
		cout << i << ' ';
	puts("");
	return 0;
}