#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <string>
using namespace std;

int main() {
	string S;
	cin >> S;
	vector<int> seq;
	int acc = 0;
	for(int i = 0; i < S.size()-1; i++) {
		if (S[i] == S[i+1])
			acc++;
		seq.push_back(acc);
	}
	int n;
	cin >> n;
	for(int i = 0; i < n; i++) {
		int l,r;
		cin >> l >> r;
		l--,r--;
		if (l == 0) {
			cout << seq[r-1] << endl;
		}
		else {
			cout << seq[r-1]-seq[l-1] << endl;
		}
	}
	return 0;
}