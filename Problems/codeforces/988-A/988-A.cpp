#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,k;
    cin >> n >> k;
    map<int,int> nums;
    for(int i = 0; i < n; i++) {
	int x; cin >> x;
	nums[x] = i;
    }
    if (nums.size() < k) {
	cout << "NO" << endl;
	return 0;
    }
    cout << "YES" << endl;
    int cnt = 0;
    for(auto x : nums) {
	cnt++;
	cout << x.second+1 << ' ';
	if (cnt == k)
	    break;
    }

    return 0;

}
