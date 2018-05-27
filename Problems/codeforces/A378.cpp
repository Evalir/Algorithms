#include <bits/stdc++.h>
using namespace std;

int main() {
	int a, b;
	cin >> a >> b;
	int p = 0, j = 0, k = 0;
	for(int i = 1; i <= 6; i++) {
		if (abs(a-i) < abs(b-i))
			p++;
		if (abs(a-i) == abs(b-i))
			j++;
		if (abs(a-i) > abs(b-i))
			k++;
	}
		cout << p << ' ' << j << ' ' << k << endl;
		return 0;
}