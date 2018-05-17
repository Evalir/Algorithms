#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <cmath>
using namespace std;

int main() {
	int n;
	cin >> n;
	int arr[n+10];
	for(int i = 0; i < n; i++)
		cin >> arr[i];
	map<int,int> dp;
	vector<int> cnt;
	int ans = 0;
	int ltaken = 0;
	for(int i = 0; i < n; i++) {
		int k = arr[i];
		dp[k] = dp[k-1]+1;
		if (ans < dp[k]) {
			ans = dp[k];
			ltaken = k;
		}
	}
	for(int i = n - 1; i >= 0; i--) {
		if (arr[i] == ltaken) {
			cnt.emplace_back(i);
			ltaken--;
		}
	}
	cout << ans << endl;	
	
	for(int i = cnt.size()-1; i >= 0; i--)
		cout << cnt[i]+1 << ' ';
	
	return 0;
}
