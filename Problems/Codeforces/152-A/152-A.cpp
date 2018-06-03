#include <vector>
#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
	int n, m;
	cin >> n >> m;
	char arr[n+10][m+10];
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < m; j++) {
			cin >> arr[i][j];
		}
	}
	vector<bool> s(n);
	vector<int> bfc(m);

	for(int i = 0; i < m; i++) {
		int cnt = 0;
		for(int j = 0; j < n; j++) {
			cnt = max(cnt,arr[j][i]-'0');
		}
		bfc[i] = (int)cnt;
	}

	for(int i = 0; i < m; i++) {
		for(int j = 0; j < n; j++) {
			if (arr[j][i]-'0' == bfc[i])
				s[j] = 1;
		}
	}
	
	int ans = 0;
	for(int i = 0; i < s.size(); i++) {
		if (s[i] == 1)
			ans++;
	}
	
	cout << ans << endl;
	return 0;
}