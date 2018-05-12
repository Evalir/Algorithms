#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
	int T;
	cin >> T;
	while(T--) {
		int n,x,y;
		cin >> n >> x >> y;
		vector<int> V(n);
		for(int i = 0; i < n; i++)
			cin >> V[i];
		bool ez = V[0] == x ? 1 : 0;
		bool hrd = V[n-1] == y ? 1 : 0;
		if (ez && hrd)
			cout << "BOTH" << endl;
		else if (ez)
			cout << "EASY" << endl;
		else if (hrd)
			cout << "HARD" << endl;
		else
			cout << "OKAY" << endl;
	}
	return 0;
}
