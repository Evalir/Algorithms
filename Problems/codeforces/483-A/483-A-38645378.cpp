#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
 	ll l,r;
	cin >> l >> r;
	int df = r-l;
	if (df == 2 && l % 2 != 0) {
		cout << -1 << endl;
		return 0;
	}           
	else if (df == 2 && l % 2 == 0) {
	    cout << l << ' ' << l+1 << ' ' << l+2 << endl;
		return 0;
	}
	else if (df >= 3) {
		if (!(l & 1))                                       {
			cout << l << ' ' << l+1 << ' ' << l+2 << endl;
			return 0;
		}
		else if ((l & 1)) {
			cout << l+1 << ' ' << l+2 << ' ' << l+3 << endl;
			return 0;
		}	
	}
	else
		cout << -1 << endl;
	return 0;
}