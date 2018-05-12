#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
	int T;
	cin >> T;
	while(T--) {
		int n, k;
		cin >> n >> k;
		vector<int> V(n);
		for(int i = 0; i < n; i++)
			cin >> V[i];
		int ans = 0;
		for(int i = 0; i < n; i++)
			ans += V[i]/k;
		cout << ans << endl;
	}
	return 0;
}
