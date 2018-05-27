#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin >> n;
	char grid[n+10][n+10];
	int ans = 0;
	for(int i = 0; i < n; i++)
		for(int j = 0; j < n; j++)
			grid[i][j] = '.';

	for(int i = 0; i < n; i++) {
		for(int j = 0; j < n; j++) {
			bool ok = true;
			if (i-1 >= 0 && grid[i-1][j] == 'C')
				ok = false;
			if (i+1 < n && grid[i+1][j] == 'C')
				ok = false;
			if (j-1 >= 0 && grid[i][j-1] == 'C')
				ok = false;
			if (j+1 < n && grid[i][j-1] == 'C')
				ok = false;
			
			if (ok) {
				++ans;
				grid[i][j] = 'C';
			}
		}
	}
	cout << ans << endl;
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < n; j++) {
			cout << grid[i][j];
		}
		cout << endl;
	}
    return 0;
}