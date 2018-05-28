//============================================================================
// Name        : A.cpp
// Author      : Enrique Ortiz
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>
using namespace std;

int main() {

	string s;
	cin >> s;
	int fcounter = 0;
	for(int i = 0; i < s.length(); i++) {
		if(s[i] == 'O' && s[i+1] == 'l' && s[i+2] == 'y' && s[i+3] == 'a') {
			fcounter++;
			 //cout << "HEY" << endl;
			 //cout << fcounter << endl;
		}
		else if (s[i] == 'D' && s[i+1] == 'a' && s[i+2] == 'n' && s[i+3] == 'i' && s[i+4] == 'l') {
			fcounter++;
			//cout << "HEY" << endl;
			//cout << fcounter << endl;
		}
		else if (s[i] == 'S' && s[i+1] == 'l' && s[i+2] == 'a' && s[i+3] == 'v' && s[i+4] == 'a') {
			fcounter++;
			//cout << "HEY" << endl;
			//cout << fcounter << endl;
				}
		else if (s[i] == 'N' && s[i+1] == 'i' && s[i+2] == 'k' && s[i+3] == 'i' && s[i+4] == 't' && s[i+5] == 'a') {
			fcounter++;
			//cout << "HEY" << endl;
			//cout << fcounter << endl;
				}
		else if (s[i] == 'A' && s[i+1] == 'n' && s[i+2] == 'n') {
			fcounter++;
			//cout << "HEY" << endl;
				}
	}

	//cout << fcounter << " AT END" << endl;

	if (fcounter > 1 || fcounter < 1) cout << "NO" << endl;
	else if (fcounter == 1) cout << "YES" << endl;

	return 0;
}