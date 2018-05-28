#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	string S;
	cin >> n >> S;
	map<string,int> tg;
	for(int i = 0; i < n-1; i++) {
		string a;
		a += S[i];
		a += S[i+1];
		tg[a]++;
	}
	int ans = 0;
	string sans;
	for(auto x : tg) {
		if (x.second > ans) {
			ans = x.second;
			sans = x.first;
		}
	}
	cout << sans << endl;
	return 0;
}