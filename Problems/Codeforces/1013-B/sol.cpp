#include <bits/stdc++.h>
using namespace std;
int main() {
	int n,x;
	scanf("%d %d", &n, &x);
	vector<int> s(n), z(n);
	map<int, int> f, pos;
	for(int i = 0; i < n; i++) {
		scanf("%d", &s[i]);
		z[i] = s[i]&x;
		f[s[i]]++, pos[s[i]] = i;
	}
	for(auto i : f)
		if (i.second > 1) {
			puts("0");
			return 0;
		}
	for(int i = 0; i < n; i++) {
		if (f[(s[i] & x)] > 0 && pos[s[i]&x] != i) {
			puts("1");
			return 0;
		}
	}
	for(int i = 0; i < n; i++) {
		if (f[(z[i] & x)] > 0 && pos[z[i]&x] != i) {
			puts("2");
			return 0;
		}
		cerr << (z[i] & x) << " vs " << z[i] << endl;
	}
	puts("-1");
	return 0;
}