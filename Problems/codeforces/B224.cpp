#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;
#define INF 100000007
int main() {
	int n, k;
	cin >> n >> k;
	vector<int> nums(n);
	set<int> diff;
	set<int> chk;
	vector<pair<int,int> > sol;

	for(int i = 0 ;i < n; i++) {
		cin >> nums[i];
		chk.insert(nums[i]);
	}
	if(chk.size() < k) {
		cout << -1 << ' ' << -1 << endl;
		return 0;
	}
	int l = 0, r = 0;
	while(r < n) {
		while(diff.size() < k) {
			diff.insert(nums[r]);
			//cerr << "inserting on " << r << endl;
			r++;
		}
		pair<int,int> lr;
		lr.first = l;
		lr.second = r-1;
		if (diff.size() == k)
			sol.push_back(lr);
		while(diff.size() == k) {
			if(nums[l+1] != nums[l])
				diff.erase(nums[l]);
			//cerr << "deleting on " << l << endl;
			l++;
			lr.first = l;
			lr.second = r-1;
			if (diff.size() == k)
				sol.push_back(lr);
		}
	}
	pair<int, int> minsol;
	minsol.first = INF;
	minsol.second = 0;
	for(int i = 0; i < sol.size(); i++) {
		//cerr << "POSSIBLE SOLUTION: l " << sol[i].first+1 << " r " << sol[i].second+1 << endl;
		if(abs(sol[i].first-sol[i].second) < abs(minsol.first-minsol.second) && sol[i].second < n) {
			minsol.first = sol[i].first;
			minsol.second = sol[i].second;
		}
	}
	
	cout << minsol.first+1 << ' ' << minsol.second+1 << endl;
	return 0;
}


/*
10 5
15 17 2 13 3 16 4 5 9 12

*/