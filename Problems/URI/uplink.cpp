#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
	string s;
	cin >> s;

	for(int i = 0; i < s.length(); i++) {
		s[i] = tolower(s[i]);
	}

	for(int i = 0; i < s.length(); i++) {
		if (i+4 < s.length() && s[i] == 'z' && s[i+1] == 'e' && s[i+2] == 'l' && s[i+3] == 'd' && s[i+4] == 'a') {
			cout << "Link Bolado" << endl;
			return 0;
		}
	}

	cout << "Link Tranquilo" << endl;
	return 0;
}