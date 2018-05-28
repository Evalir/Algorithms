#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	string S;
	cin >> n >> S;
	bool ok = true;
	if (n == 1) {
		if (S[0] == '1') {
			cout << "Yes" << endl;
			return 0;
		}
		else
			{
			cout << "No" << endl;
			return 0;
			}

	}
	for(int i = 0; i < n; i++) {
		if (i == 0) {
			if (S[i] == '0' && S[i+1] == '0')
				ok = false;
			if (S[i] == '1' && S[i+1] == '1')
				ok = false;
		}
		if (i == n-1) {
			if (S[i] == '0' && S[i-1] == '0')
				ok = false;
	  		if (S[i] == '1' && S[i-1] == '1')
	  			ok = false;
	  	}
	  	if (S[i] == '1' && S[i-1] == '1' || S[i] == '1' && S[i+1] == '1')
	  		ok = false;
		if (S[i] == '0' && S[i-1] == '0' && S[i+1] == '0')
			ok = false;
	}
	if (ok)
		cout << "Yes" << endl;
	else
		cout << "No" << endl;
	return 0;
}