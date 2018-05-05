#include <iostream>
#include <cmath>
#include <vector>
#include <string>
using namespace std;

int main() {
	string S;
	while(cin >> S) {
		int len = S.length();
		int spx = 0;
		for(int i = 0; i < S.length(); i++) {
			for(int j = 0; j < spx; j++) {
				cout << ' ';
			}

			for(int j = 0; j < len; j++) {
				if (j != len-1)
					cout << S[j] << ' ';
				else
					cout << S[j];
			}
			cout << endl;
			len--;
			spx++;
		}
		cout << endl;
	}

	return 0;
}