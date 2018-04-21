#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int main() {
	while(true) {
		int n;
		cin >> n;
		if (n == 0)
			break;
		string s;
		cin >> s;
		cout << s.length() << endl;
		int row = 0;
		for(int i = 0; i < s.length(); i++) {
			if (i % 5 == 0 && i != 0)
				row++;
		}
		row++;

		char mat[row+10][n+10];
		int cnt = 0;
		for(int i = 0; i < row; i++) {
			for(int j = 0; j < n; j++) {
				mat[i][j] = s[cnt];
				cnt++;
			}
		}
		for(int i = 0; i < row; i++) {
			for(int j = 0; j < n; j++) {
				cout << mat[i][j] << ' ';
			}
			cerr << endl;
		}

		 for(int i = 0; i < n; i++) {
		 	for(int j = 0; j < row; j++) {
				cout << mat[j][i];
		 	}
		 }
	}

	return 0;
}