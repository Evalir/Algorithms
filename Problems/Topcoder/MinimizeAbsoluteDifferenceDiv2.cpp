#include <bits/stdc++.h>
using namespace std;

class MinimizeAbsoluteDifferenceDiv2 {
	vector<int> findTriple(int x0, int x1, int x2) {
		vector<int> x = {x0,x1,x2};
		vector<int> pos = {0,1,2};
		vector<int> ans(3);
		double tans = 1e18;
		do {
			double cnt = fabs(x[pos[0]]/x[pos[1]]-x[pos[2]]);
			if (cnt < tans) {
				tans = cnt;
				ans = pos;
			}
		} while(next_permutation(pos.begin(),pos.end()));
		return ans;
	}
};
