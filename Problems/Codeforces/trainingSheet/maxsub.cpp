#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
	int T;
	cin >> T;
	while(T--) {
		int n;
		cin >> n;
		vector<int> V(n);
		for(int i = 0; i < n; i++)
			cin >> V[i];
		int ans = (int)-1e9;
		for(int i = 0; i < n; i++)
			for(int j = i; j < n; j++) {
				ans = (int)-1e9;
				for(int k = i; k <= j; k++)
					ans = max(ans,V[k]);
			cout << ans << ' ';
			}
		cout << endl;
	}
	
	
	return 0;
	
}
