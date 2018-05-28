#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int n;
	cin >> n;
	int ans = -1;
	vector<int> nums(n);
	for(int i = 0; i < n; i++)
		cin >> nums[i];
	sort(nums.begin(), nums.end());
	if (n % 2 != 0)
        ans = nums[n/2];
    else
        ans = nums[(n/2)-1];
	cout << ans << endl;
}