#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	--n;
	vector<int> ps(n);
	int cnt = 0;
	for(int i = 0; i < n; i++) {
		int x; cin >> x;
		cnt += x;
		ps[i] = cnt;
	}
	int a,b;
	cin >> a >> b;
	--a,--b;
	if (a == 0)
		cout << ps[--b] << endl;
	else if (a) {
		cout << ps[--b]-ps[--a] << endl;
	}
	return 0;
}