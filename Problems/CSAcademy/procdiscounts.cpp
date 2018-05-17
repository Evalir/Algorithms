#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

bool sortDisc(pair<long,long> d1, pair<long, long> d2) {
	return d1.first < d2.first;
}

int main() {
	int n, x;
	cin >> n >> x;
	vector<pair<long,long> > discs;
	for(int i = 0; i < n; i++) {
		pair<long, long> disc;
		cin >> disc.first >> disc.second;
		discs.emplace_back(disc);
	}
	sort(discs.begin(), discs.end(), sortDisc);
	int ans = x;
	//for(auto di : discs)
	//	cout << di.first << ' ' << di.second << endl;
	int dacc = 0;
	for(auto di : discs) {
	    dacc += di.second;
	    int y = di.first;
	    x = max(x,y);
		int cnt = x - dacc;
		cerr << cnt << ' ' << ans << endl;
		cerr << x << endl;
		ans = min(cnt, ans);
	}
	cout << ans << endl;
	return 0;
}
