#include <iostream>
using namespace std;

int main() {

	int k,l,m,n,d;
	cin >> k;
	cin >> l;
	cin >> m;
	cin >> n;
	cin >> d;

	int div = 0;
	int nodiv = 0;

	for (int i = 1; i <= d; i++) {
		if (i % k == 0) {
			div++;
		}
		else if (i % l == 0) {
			div++;
		}
		else if (i % m == 0) {
			div++;
		}
		else if (i % n == 0) {
			div++;
		}
		else {
			nodiv++;
		}
	}

	cout << div << endl;
}