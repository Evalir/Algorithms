#include <iostream>
#include <vector>
using namespace std;

int main() {
	int n;
	cin >> n;
	int minz1 = 0, mino1 = 0, minz2 = 0, mino2 = 0;
	for(int i = 0; i < n; i++) {
		int x, y;
		cin >> x >> y;
		if (x == 0)
			minz1++;
		else if (x == 1)
			mino1++;

		if (y == 0)
			minz2++;
		else if (y == 1)
			mino2++;
	}

	cout << min(minz1, mino1) + min(minz2, mino2) << endl;
	return 0;
}