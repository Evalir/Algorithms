#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <cassert>
using namespace std;
using ii = pair<int,int>;
using vii = vector<pair<int,int> >;
using ll = long long;
vii V;
int ans = 0;
void go(int k, ll a, ll b, int l, int r) {
	if(k == (int)V.size()) {
		if (l <= a && a <= r && l <= b && b <= r)
			++ans;
	}
	else {
			go(k+1, a *V[k].second, b, l, r);
			go(k+1, a, b * V[k].second, l, r);
		}
}

int main() {
	int l,r,x,y;
	cin >> l >> r >> x >> y;
	if ((y%x)) {
		cout << 0 << endl;
		return 0;
	}
	int M = y / x;
	for(int i = 2; i <= M; i++) {
		if (M % i == 0) {
			ii s(i,1);
			while(M % i == 0) {
				s.second *= i;
				M /= i;
			}
			V.push_back(s);
		}
	}
	if (M != 1) {
		V.push_back(ii(M,M));
	}
	go(0,x,x,l,r);
	cout << ans << endl;
	return 0;
}