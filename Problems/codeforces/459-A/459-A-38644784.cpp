#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
typedef pair<int,int> pii;
struct point {
    int x,y;
};

int main() {
    point a, b;
    cin >> a.x >> a.y >> b.x >> b.y;
	if ((a.x == b.x && a.y == b.y) || ((a.x != b.x && a.y != b.y && abs(a.x-b.x) != abs(a.y-b.y))))
		cout << -1 << endl;
	else if (a.x == b.x) {
		int l = abs(a.y-b.y);
		cout << a.x+l << ' ' << a.y << ' ' << b.x+l << ' ' << b.y << endl;
	}    
	else if (a.y == b.y) {
		int l = abs(a.x-b.x);
		cout << a.x << ' ' << a.y + l << ' ' << b.x << ' ' << b.y + l << endl;	                                                                             	
	}
	else {
		cout << a.x << ' ' << b.y << ' ' << b.x << ' ' << a.y << endl;
	}

    return 0;
}