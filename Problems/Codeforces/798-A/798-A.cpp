#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
	string S;
	cin >> S;
	int ans = 0;
	for(int i = 0; i < S.size()/2; i++) {
		if (S[i] != S[S.size()-1-i]) {
			//cerr << i << endl;
			ans++;
		}
	}
	if (ans == 1)
		cout << "YES" << endl;
	else if (ans == 0 && (int)S.size() % 2 != 0)
		cout << "YES" << endl;
	else
		cout << "NO" << endl;
	return 0;
}