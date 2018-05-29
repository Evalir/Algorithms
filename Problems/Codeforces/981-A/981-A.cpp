#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <set>
using namespace std;

int checkPalindrome(string S) {
	set<char> K;
	for(int i = 0; i < S.size(); i++)
		K.insert(S[i]);
	if (K.size() == 1)
		return 2;
	for(int i = 0; i < S.size()/2; i++) {
		if (S[i] != S[S.size()-1-i])
			return false;
		else
			continue;
	}
	return true;
}

int main() {
	string S;
	cin >> S;
	int d = checkPalindrome(S);
	if (d == 2)
		cout << 0 << endl;
	else if (d == 1)
		cout << S.size()-1 << endl;
	else if (d == 0)
		cout << S.size() << endl;
	return 0;
}