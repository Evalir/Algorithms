#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
	int n;
	cin >> n;
	vector<int> p(n);
	for(int i = 0; i < n; i++)
		cin >> p[i];

	int a = 0, b = 0;
	bool ok = true;
	for(int i = 0; i < n; i++) {
		if (p[i] == 25)
			a++;
		if (p[i] == 50) {
			if (a > 0) {
				a--;
				b++;
			}
			else
				ok = false;
		}
		if (p[i] == 100) {
			if (a > 0 && b > 0) {
				--a,--b;
			}
			else if (a > 2) {
				a -= 3;
			}
			else
				ok = false;
		}
		if (!ok) {
			cout << "NO" << endl;
			return 0;
		}
	}
	cout << "YES" << endl;
	return 0;
}