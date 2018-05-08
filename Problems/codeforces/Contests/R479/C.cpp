#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <string>
#include <set>
#include <map>
using namespace std;

int main() {
	int n, k;
	cin >> n >> k;
	vector<long> nums(n,0);
	map<long,int> FREQ;
	for(int i = 0; i < n; i++) {
		cin >> nums[i];
		FREQ[nums[i]]++;
	}
	int ck = 0;
	if (k == 0) {
		if (FREQ[1] <= 0) {
			cout << 1 << endl;
			return 0;
		}
	}
	//for(auto x : FREQ) cout << x.first << " -> " << x.second << endl;
	for(auto x : FREQ) {
		ck += x.second;
		if (ck == k) {
			cout << x.first << endl;
			return 0;
		}
		if (ck > k)
			break;
		
	}
	
	cout << -1 << endl;
	return 0;
}
