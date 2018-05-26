#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;
typedef long long ll;
int main() {
	int n,m;
	cin >> n >> m;
	vector<ll> cand(n);
	int ans = 0;
	for(int i = 0; i < m; i++) {
		pair<int,int> mn;
		mn.first = -1;
		mn.second = -1;
		for(int j = 0; j < n; j++) {
			int v; cin >> v;
			if (v > mn.first) {
				mn.first = v;
				mn.second = j;
			}
		}
		cand[mn.second]++;
	}

	int cnt = -1;
	for(int i = 0; i < cand.size(); i++) {
		if (cnt < cand[i]) {
			cnt = cand[i];
			ans = i;
		}
	}
	++ans;
	cout << ans << endl;

	return 0;
}