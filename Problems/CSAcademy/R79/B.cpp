#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <map>
using namespace std;
typedef long long ll;
typedef double df;
int main() {
    int n, m;
    cin >> n >> m;
    vector<pair<ll,ll> > ci;
    vector<pair<ll,ll> > di;
    for(int i = 0; i < n; i++) {
		pair<ll,ll> xy;
		cin >> xy.first >> xy.second;
		ci.emplace_back(xy);
	}
	for(int i = 0; i < m; i++) {
		pair<ll,ll> xy;
		cin >> xy.first >> xy.second;
		di.emplace_back(xy);
	}
	map<pair<ll,ll>, int> dtc;
	for(int i = 0; i < m; i++) {
		pair<ll,ll> xy;
		int idx = 100000;
		df mind = 1e9;
		for(int j = 0; j < n; j++) {
			df dx = sqrt(((ci[j].first-di[i].first)*(ci[j].first-di[i].first)) + 
			((ci[j].second-di[i].second)*(ci[j].second-di[i].second)));
			cerr << "dx for ci di " << ci[j].first << ' ' << ci[j].second << " di " << di[i].first << ' ' << di[i].second << " is " << dx << endl;
			if (dx < mind) {
								idx = j;
				cerr << "chose idx " << idx << endl;
				xy.first = ci[j].first;
				xy.second = ci[j].second;
				mind = dx;
			}
		}
		dtc[xy]++;
	}
	int ans = 0;
	for(auto catc : dtc) {
		if (catc.second == 1)
			ans++;
	}
	cout << ans << endl;
	
}
