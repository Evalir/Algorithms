#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <set>
using namespace std;

int main() {
	int n, m, z;
	cin >> n >> m >> z;
	int ans = 0;
	int i = 1;
	while(n*i <= z) {
		if ((n*i) % m == 0)
			++ans;
		++i;
	}
	cout << ans << endl;
	return 0;
}