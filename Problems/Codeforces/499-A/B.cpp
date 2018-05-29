#include <iostream>
#include <cmath>
#include <climits>
#include <vector>
#include <algorithm>
using namespace std;
typedef long long ll;
int main() {
	ll x,y;
	cin >> x >> y;
	if (x == y)
		cout << "=" << endl;
	else {
		double a = log(x+1e-10);
		double b = log(y+1e-10);
		double z = a*y;
		double c = b*x;
		if (z > c) {
			cout << ">" << endl;
		}
		else if (z < c) {
			cout << "<" << endl;
		}
		else
			cout << "=" << endl;
	}
	return 0;
}