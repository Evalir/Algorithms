#include <bits/stdc++.h>
using namespace std;

int main() {
	int k;
	cin >> k;
	string S;
	cin >> S;
	set<char> let;
	vector<bool> app(200,0);
	for(int i = 0; i < S.size(); i++)
		let.insert(S[i]);
	if (let.size() < k) {
		cout << "NO" << endl;
		return 0;
	}
	int cnt = k;
	cout << "YES" << endl;
	cout << S[0];
	app[S[0]] = true;
	for(int i = 1; i < S.size(); i++) {
		if(cnt > 1 && !app[S[i]]) {
			cout << endl << S[i] << endl; 
			--cnt;	
			app[S[i]] = true;
		}
		else if (cnt > 1 && app[S[i]]) {
			cout << S[i];
			app[S[i]] = true;
		}
		else if (cnt == 1)
			cout << S[i];
	}
}