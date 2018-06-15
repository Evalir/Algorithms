#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;

int main() {
	int T;
	cin >> T;
	while(T--) {
		set<char> let;
		string S;
		int n;
		cin >> S;
		cin >> n;
		for(int i = 0; i < S.size(); i++) {
			let.insert(S[i]);
		}
		int cnt = (int)S.size() - (int)let.size();
		cnt -= n;
		if (cnt <= 0)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}
	return 0;
}