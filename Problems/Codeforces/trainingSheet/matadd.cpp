#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int a[110][110], b[110][110];

int main() {
	int r,c;
	cin >> r >> c;
	for(int i = 0; i < r; i++) {
		for(int j = 0; j < c; j++) {
			cin >> a[i][j];
		}
	}
	for(int i = 0; i < r; i++) {
		for(int j = 0; j < c; j++) {
			cin >> b[i][j];
		}
	}
	for(int i = 0; i < r; i++) {
		for(int j = 0; j < c; j++) {
			cout << a[i][j] + b[i][j] << ' ';
		}
		cout << endl;
	}
	return 0;
}