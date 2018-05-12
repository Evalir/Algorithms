#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <cstdio>
using namespace std;

int main() {
	int n;
	double x;
	cin >> n >> x;
	if (n > x || (1.00)*n+0.50 > x) {
		printf("%.2lf\n", x);
	}
	else if (n % 5 != 0) {
		printf("%.2lf\n", x);
	}
	else {
		printf("%.2lf\n", x-n-.50);
	}
	return 0;
}
