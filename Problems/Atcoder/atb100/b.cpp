#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
                        
int main() {
	ll d,n;
	cin >> d >> n;
	if (d == 0) {
		if (n == 100)
			cout << ++n << endl;
		else
			cout << n << endl;
	}
	if (d == 1) {
		if (n == 100)
			cout << (++n)*100 << endl;
		else
			cout << n * 100 << endl;

	}
	if (d == 2) {
	 	if (n==100)
	 		cout << (++n)*10000 << endl;
	 	else
	 		cout << n * 10000 << endl;
	}
	return 0;

}