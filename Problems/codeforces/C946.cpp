#include <iostream>
#include <string>
#include <algorithm>
#include <set>
using namespace std;

int main() {
	string s;
	cin >> s;
	char lobt = 'a';
	for(int i = 0; i < s.size(); i++) {
		if(s[i] == lobt) {
			lobt++;
		}
		if (lobt > 'z') {
			cout << s << endl;
			return 0;
		}
	}
	if (lobt > 'z') {
			cout << s << endl;
			return 0;
		}
	else {
		lobt = 'a';
		for(int i = 0; i < s.size(); i++) {
			if (s[i] <= lobt) {
				s[i] = lobt;
				lobt++;
			}
			if (lobt > 'z') {
				cout << s << endl;
				return 0;
			}
		}
	}
	if (lobt > 'z')
		cout << s << endl;
	else
		cout << -1 << endl;

	return 0;
}