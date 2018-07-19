#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int n;
	cin >> n;
	vector<int> s(150,0);
	for(int i = 0; i < n; i++) {
		int x; cin >> x;
		s[x]++;
	}
	int ans = 0;
	for(int i = 0; i < 110; i++)
		ans = max(ans,s[i]);
	cout << ans << endl;
	return 0;
}