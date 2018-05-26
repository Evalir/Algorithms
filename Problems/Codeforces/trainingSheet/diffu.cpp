#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <string>
using namespace std;

bool isOdd(int n) {
	return n % 2 == 0 ? 0 : 1;
}

bool isPalindrome(int n) {
	string S;
	while(n > 0) {
		S += (n % 2) + '0';
		n /= 2;
	}
	for(int i = 0; i < S.size()/2; i++) {
		if (S[i] == S[S.size()-1-i])
			continue;
		else
			return false;
	}
	return true;
}

int main() {
	int n;
	cin >> n;
	if (isOdd(n) && isPalindrome(n))
		cout << "YES" << endl;
	else
		cout << "NO" << endl;
	return 0;
}