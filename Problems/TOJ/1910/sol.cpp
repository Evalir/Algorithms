#include <bits/stdc++.h>
using namespace std;
using pii = pair<int,int>;

int main() {
	int n;
	cin >> n;
	vector<int> V(n);
	for(int &i : V) cin >> i;
	pii ans = {0,0};
	for(int i = 0; i + 2 < n; i++) {
		if (V[i] + V[i+1] + V[i+2] > ans.first) {
			ans.first =V[i] + V[i+1] + V[i+2];
			ans.second = i + 1;
		}
	}
	cout << ans.first << ' ' << ans.second+1 << endl;
	return 0;
}
