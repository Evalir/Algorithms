#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

bool isCaps(char c) {
    if (c >= 65 && c <= 90) return true;
    else return false;
}

int main() {
    int counter = 0;
    string s;
    cin >> s;
    for (int i = 0; i < s.length(); i++) {
    	if (isCaps(s[i])) counter++;
    }
    //cout << counter << endl;
    if ((counter == s.length() - 1 && s[0] > 90) || counter == s.length()) {
    	for (int i = 0; i < s.length(); i++) {
    		if (isCaps(s[i])) s[i] = tolower(s[i]);
    		else s[i] = toupper(s[i]);
    	}
    }
    cout << s << endl;
	
    return 0;
}