#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <map>
#include <set>
using namespace std;
typedef unsigned long long ull;
#define INF (int)1e9
int n;
ull lis[3010];
ull p[3010];
ull si[3010];
ull ri[3010];

ull go(int k, ull sum) {
	if (k == -1)
		return sum + ri[k];
	else
		return go(p[k], sum+ri[k]);
}

int main() {
	cin >> n;
	for(int i = 0; i < n; i++)
		cin >> si[i];
	for(int i = 0; i < n; i++)
		cin >> ri[i];

	for(int i = 0; i < n; i++) {
		lis[i] = 1;
		p[i] = -1;
		for(int j = 0; j < i; j++) {
			if (si[j] < si[i]) {
				if (lis[i] < lis[j]+1) {
					lis[i] = lis[j]+1;
					p[i] = j;
					cerr << "record lis at i " << i << " of " << lis[i] <<  " breadcrumb " << p[i] << endl;

				}
			}
		}
	}

	ull ans = INF;
	for(int i = n-1; i >= 0; i--) {
		if (lis[i] == 3) {
			cerr << lis[i] << " at " << i << endl;
			ans = min(ans,go(i,0));
		}
	}
	if (ans == INF)
		cout << -1 << endl;
	else
		cout << ans << endl;
	return 0;
}