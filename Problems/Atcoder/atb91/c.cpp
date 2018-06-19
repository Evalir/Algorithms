#include <bits/stdc++.h>
using namespace std;

bool comp1(pair<int,int> first, pair<int,int> second){return first.first < second.first;}

int main() {
	int n;
	cin >> n;
	vector<pair<int,int>> R(n),B(n);
	vector<bool> tr(n, 0), tb(n, 0);
	for(pair<int,int>& i : R)
		cin >> i.first >> i.second;
	for(pair<int,int>& i : B)
		cin >> i.first >> i.second;
	int ans = 0;	
	for(int i = 0; i < n; i++) {
		bool f = 0;
		for(int j = 0; j < n ; j++) {
			if (!tr[i] && !tb[j] && R[i].first < B[j].first && R[i].second < B[i].second) {
				++ans;
				tr[i] = true;
				tb[j] = true;
				f = true;
				break;	
			}
		}
		if (f) continue;
	}
	cout << ans << endl;
	return 0;
}