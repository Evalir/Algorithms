#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <map>
#include <set>
using namespace std;
typedef unsigned long long ull;
vector<ull> lis(n+10,0);
vector<ull> prev(n+10,-1);
vector<ull> ans(n+10);
vector<ull> si(n);
vector<ull> ri(n);
ull go(int n, ull sum) {
	int ans = 0;
	if (prev[n] == -1)
		return sum;
	else {
		ans += min(ri[n] + go(n-1,sum), go(n-1,sum));
	}
	return ans;
}
int main() {
	int n;
	cin >> n;
	int l1 = 0,l2 = 0,l3 = 0;
	int bestEnd = 0;
	int maxLength = 3;
	for(int i = 0; i < n; i++)
		cin >> si[i];
	for(int i = 0; i < n; i++)
		cin >> ri[i];

	for(int i = 0; i < si.size(); i++) {
		lis[i] = 1;
		prev[i] = -1;
		for(int j = 0; j < i; j++) {
			if (si[j] < si[i]) {
				lis[i] = max(lis[i],lis[j]+1);
				prev[i] = j;
			}
			 if (lis[i] == 3)
   			{
      			bestEnd = i;
      			maxLength = lis[i];
   			}
		}
	}

	ull ans = go(bestEnd,0);
	cout << ans << endl;
	return 0;
}