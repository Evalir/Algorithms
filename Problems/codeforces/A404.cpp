#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	char g[n+10][n+10];
	bool dg[n+10][n+10];
	set<char> s;

	for(int i = 0; i < n; i++)
		for(int j = 0; j < n; j++) {
			cin >> g[i][j];
			dg[i][j] = 0;
			s.insert(g[i][j]);
		}
	if (s.size() > 2 || s.size() < 2) {
		cout << "NO" << endl;
		return 0;
	}
	for(int i = 0; i < n-1; i++) {
		dg[i][i] = 1, dg[i+1][i+1] = 1;
		if (g[i][i] != g[i+1][i+1]) {
			cerr << g[i][i] << ' ' << g[i][1] << endl;
			cout << "NO" << endl;
			return 0;
		}
		else
			continue;
	}
	for(int i = 0; i < n-1; i++) {
		dg[0+i][n-1-i] = 1, dg[0+i+1][n-1-(i+1)] = 1;
		if (g[0+i][n-1-i] != g[0+i+1][n-1-(i+1)]) {
			cerr << g[0+i][n-1-i] << ' ' << g[0+i+1][n-1-(i+1)] << endl;
			cout << "NO" << endl;
			return 0;
		}
		else
			continue;
	}
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < n; j++) {
			if (dg[i][j] == 0) {
				if (g[i][j] == g[0][0]) {
					cout << "NO" << endl;
					return 0;
				}           				
			}
		}
	}
	cout << "YES" << endl;
	return 0;
}
