#include <bits/stdc++.h>
using namespace std;

int main() {
	int a, b, c;
	cin >> a >> b >> c;
	int max1 = max(a, b);
	int max2 = max(max1, c);
	cout << max2 << " eh o maior" << endl;
	return 0;
}