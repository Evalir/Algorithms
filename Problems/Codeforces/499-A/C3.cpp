#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <map>
#include <set>
using namespace std;
typedef long long ull;
#define INF (long long)1e12

int main() {
	ull lt[3010];
	ull p[3010];
	ull si[3010];
	ull ri[3010];
	int n;
	cin >> n;
	for(int i = 0; i < n; i++)
		cin >> si[i];
	for(int i = 0; i < n; i++)
		cin >> ri[i];

	for(int i = 0; i < n; i++) {
		lt[i] = INF;
		p[i] = INF;
	}

	for(int i = 0; i < n; i++) {
		for(int j = 0; j < i; j++) {
			if (si[j] < si[i]) {
				lt[i] = min(lt[i], ri[i] + ri[j]);
			}
		}
	}

	ull ans = INF;
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < i; j++) {
			if (lt[i] == INF)
				continue;
			if (si[j] >= si[i])
				continue;
			p[i] = min(p[i], lt[j]+ri[i]);
			ans = min(ans, p[i]);
		}
	}
	if (ans == INF)
		cout << -1 << endl;
	else
		cout << ans << endl;
	return 0;
}