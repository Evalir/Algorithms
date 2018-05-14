#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int n;
	cin >> n;
	vector<int> nums(n,0);
	vector<int> ls(1010,0);
	for(int i = 0; i < n; i++) {
		cin >> nums[i];
		ls[nums[i]] = i;
	}
	int ans = 0;
	for(int i = 0; i < n; i++) {
		if (i == ls[nums[i]])
			ans++;
	}
	cout << ans << endl;
	for(int i = 0; i < n; i++) {
		if (i == ls[nums[i]])
			cout << nums[i] << ' ';
	}
	return 0;
}
