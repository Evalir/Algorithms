#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

long long ps[1000000];
int main() {
	ios_base::sync_with_stdio(false);
	int T;
	cin >> T;
	while(T--) {
		int n;
		cin >> n;
		long long sum = 0;
		for(int i = 0; i < n; i++) {
			int x;
			cin >> x;
			sum += x;
			ps[i] = sum;
		}
		int q;
		cin >> q;
		while(q--) {
			int l,r;
			cin >> l >> r;
			l--,r--;
			if (l == 0)
				cout << ps[r] << endl;
			else
				cout << ps[r]-ps[l-1] << endl;
		}
	}
	return 0;
}
