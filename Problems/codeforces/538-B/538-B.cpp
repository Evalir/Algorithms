#include <bits/stdc++.h>
using namespace std;
vector<int> v;
short memo[70][1000000];
int joa(int pt, int rem) {
	int ans;
	if (rem == 0) {
		return 0;
	}
	if (pt < 0) {
		return 1000000;
	}
	if (memo[pt][rem] != -1)
		return memo[pt][rem];
	if (rem - v[pt] < 0)
	 	return joa(pt-1, rem);
	else {
		int y = joa(pt-1, rem);
		int x = 1 + joa(pt, rem - v[pt]);
		ans = min(x,y); 
	}
	memo[pt][rem] = ans;
	return ans;

}

int main() {
	int n;
	cin >> n;                    
	for(int i = 1; i <= (int)1e6; i++) {
		int k = i;
		bool ok = true;
		while(k > 0) {
			if (k % 10 == 1 || k % 10 == 0) {
				k /= 10;
				continue;
			}
			else {
				ok = false;
				break;
			}			
		}
		if (ok)
			v.push_back(i);
	}
	for(int i = 0; i < 66; i++) {
		for(int j = 0; j < 1000000; j++) {
			memo[i][j] = -1;
		}
	}
	int pt = v.size()-1;
	int ans = joa(pt, n);
	cout << ans << endl;
	return 0;

}