#include <bits/stdc++.h>
using namespace std;

int main() {
	long long a,b;
	cin >> a >> b;
	cout << max(a+b,max(a-b,a*b));
	return 0;
}