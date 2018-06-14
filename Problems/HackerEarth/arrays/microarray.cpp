#include <bits/stdc++.h>
using namespace std;

int main() {
	int T;
	cin >> T;
	while(T--) {
		int n,k;
		cin >> n >> k;
		vector<int> a(n);
		for(int& i : a)
			cin >> i;
		sort(a.begin(),a.end());
		if (k >= a[0])
			cout << abs(k-a[0]) << endl;
		else
			cout << 0 << endl; 
	}
	return 0;
}