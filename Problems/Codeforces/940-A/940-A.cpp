#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;
#define INF (int)1e9
int main() {
	int n, d;
	cin >> n >> d;
	vector<int> p(n);
	for(int i = 0; i < n; i++)
		cin >> p[i];
	int ans = 0;
	sort(p.begin(), p.end());
	for(int i = 0; i < n; i++) {
		for(int j = i; j < n; j++) {
			if (p[j]-p[i] <= d) {
				ans = max(ans, j-i+1);
			}
		}
	}
	cout << n-ans << endl;
	return 0;
}