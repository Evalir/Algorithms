#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;
typedef long long ll;

struct Point {
	double x,y;
};

int main() {
	Point C;
	int r;
	int n;
	cin >> C.x >> C.y >> r >> n;

	while(n--) {
		Point p;
		cin >> p.x >> p.y;
		double dxy = sqrt((C.x-p.x)*(C.x-p.x) + (C.y-p.y)*(C.y-p.y));
		cerr << dxy << " is " << endl;
		if (dxy <= r)
			cout << "YES" <<endl;
		else
			cout << "NO" << endl;
	}
	return 0;
}