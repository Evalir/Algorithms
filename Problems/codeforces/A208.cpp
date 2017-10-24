#include <iostream>
#include <string>
#include <algorithm>
#include <cstdio>
using namespace std;

int main() {
	string s;
	cin >> s;

	for(int i = 0; i < s.length(); i++) {

		if(s[i] == 'W' && s[i+1] == 'U' && s[i+2] == 'B' && i != s.length() - 2) {
			s[i] = ' ';
			s[i+1] = ' ';
			s[i+2] = ' ';
		}
	}

	cout << s << endl;
	return 0;
}
