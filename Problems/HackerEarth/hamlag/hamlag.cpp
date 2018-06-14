#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	vector<int> a(n),b;
	for(int& i : a)
		cin >> i;
	int maxe = 0;
	for(int i = n-1; i >= 0; i--) {
		if (a[i] > maxe) {
		 	b.push_back(a[i]);
		 	maxe = a[i];
		}
	}
	for(int i = (int)b.size()-1; i >= 0; i--) {
	 	cout << b[i] << ' ';
	}
	return 0;

}