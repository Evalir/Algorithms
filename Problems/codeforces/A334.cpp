#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

int main() {
	int N;
	cin >> N;
	int r = N*N;
	int l = 1;
	while (l < r) {
		cout << r << ' ' << l << endl;
		r--;
		l++;
	}

	return 0;
}
