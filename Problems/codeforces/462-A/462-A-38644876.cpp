#include <bits/stdc++.h>
using namespace std;

int main() {
	char g[110][110];
	int n;
	cin >> n;         
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < n; j++) {
			cin >> g[i][j];
		}
	}

	for(int i = 0; i < n; i++) {
		for(int j = 0; j < n; j++) {
			int s = 0;
			if (i-1 >= 0 && g[i-1][j] == 'o')
				s++;
			if (i+1 < n && g[i+1][j] == 'o')
				s++;
			if (j-1 >= 0 && g[i][j-1] == 'o')
				s++;
			if (j+1 < n && g[i][j+1] == 'o')
				s++;
			
			if (s & 1) {
				cout << "NO" << endl;
				return 0;
			}
		}
	}
	
	cout << "YES" << endl;
	return 0;
}