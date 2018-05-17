#include <bits/stdc++.h>
using namespace std;

int main() {
	int T;
	cin >> T;
	while(T--) {
		int x;
		cin >> x;
		if (x > 0 && x % 2 == 0)
			cout << "EVEN POSITIVE" << endl;
		else if (x > 0 && x % 2 != 0)
			cout << "ODD POSITIVE" << endl;
		else if (x < 0 && x % 2 == 0)
			cout << "EVEN NEGATIVE" << endl;
		else if (x < 0 && x % 2 != 0)
			cout << "ODD NEGATIVE" << endl;
		else if (x == 0)
			cout << "NULL" << endl;

	}

	return 0;

}