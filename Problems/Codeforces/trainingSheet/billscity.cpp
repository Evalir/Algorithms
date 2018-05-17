#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
	int n;
	cin >> n;
	vector<int> el(n);
	for(int i = 0; i < n; i++)
		cin >> el[i];
	int maxd = 0;
	for(int i = 0; i < n -1; i++) {
		maxd = max(maxd, abs(el[i]-el[i+1]));
	}
	cout << maxd << endl;
	return 0;
}
