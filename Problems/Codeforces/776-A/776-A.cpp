#include <vector>
#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
using namespace std;

int main() {
	string A, B;
	cin >> A >> B;
	int n;
	cin >> n;
	for(int i = 0; i < n; i++) {
		cout << A  << ' ' << B << endl;
		string C,D;
		cin >> C >> D;
		if (C == A) {
			A = D;
			continue;
		}
		else {
			B = D;
			continue;
		}
	}
	cout << A << ' ' << B << endl;
	return 0;
}