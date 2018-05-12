#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
int arr[10000];
bool isEven(char c) {
	if (c == '2' || c == '4' || c == '6' || c == '8')
		return true;
	else
		return false;
}

void precalculate(string S) {
	for(int i = 0; i < S.size(); i++) {
		int ans = 0;
		for(int j = i; j < S.size(); j++) {
			if (isEven(S[j]))
				ans++;
		}
		arr[i] = ans;
	}
	return;
}

int main() {
	string S;
	cin >> S;
	precalculate(S);
	for(int i = 0; i < S.size(); i++)
		cout << arr[i] << ' ';
	return 0;
}
