#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;
using ll = long long;
vector<int> l(100010), r(100010);

int main() {
	int n;
	cin >> n;
	ll maxs = 0;
	ll ml = 0, mr = 0;
	for(int i = 0; i < n; i++) {
		cin >> l[i] >> r[i];
		ml += l[i], mr += r[i];		
	}
	maxs = abs(ml-mr);
	pair<int, ll> ans = {0,maxs};
	for(int i = 0; i < n; i++) {
		int a = ml, b = mr;
		a -= l[i], b -= r[i];
		a += r[i], b += l[i];
		if (abs(a-b) > ans.second) {
			ans.first = i+1;
			ans.second = abs(a-b);
		}
	}
	cout << ans.first << endl;
	return 0;
}

