#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>
#include <bits/stdc++.h>
using namespace std;

bool ok(int x) {
	while(x) {
		int s = x % 10;
		if (s == 4) return false;
		x /= 10;
	}
	return true;
}

int main() {
	int c;
	cin >> c;
	int a = -1, b = -1;
	for(int i = 0; i <= 100000; i++) {
		int x = i, y = c - i;
		if (ok(x) && ok (y)) {
			a = x, b = y;
			break;
		}
	}
	if (a != -1 && b != -1) {
		cout << a << " " << b << "\n";
		return 0;
	}
	string sc = to_string(c);
	string res = "";
	for(int i = 0; i < sc.size(); i++) {
		sc[i] == '4' ? res += '1' : res += sc[i];
	}
	a = 0;
	for(int i = 0; i < res.size(); i++) {
		a = a * 10 + (res[i] - '0');
	}
	b = c - a;
	cout << a << " " << b << "\n";
	return 0;
}
