#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	vector<int> a(300);
	for(int i = 0; i < n; i++) {
		int x; cin >> x;
		++a[x];
	}
	if (a[100] % 2 == 0 && a[200] % 2 == 0)
		cout << "YES" << endl; 
	else if (a[100] >= 2 && a[100] % 2 == 0 && a[200] % 2 == 1)
		cout << "YES" << endl;
	else
		cout << "NO" << endl;
	return 0;	
}