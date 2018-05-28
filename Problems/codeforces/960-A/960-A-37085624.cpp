#include <iostream>
#include <string>
#include <map>
#include <stack>
using namespace std;

int main() {
	string s;
	cin >> s;
	map<char, int> FREQ;
	stack<char> lett;
	int la,lb,lc;
	for(int i = 0; i < s.size(); i++) {
		FREQ[s[i]]++;
		if (s[i] == 'a')
			la = i;
		else if (s[i] == 'b')
			lb = i;
		else if (s[i] == 'c')
			lc = i;
	}
	char let;
	for(int i = 0; i < s.size(); i++) {
		if (i == 0) {
			let = s[0];
			lett.push(let);
		}
		else {
			if (s[i] != let) {
				let = s[i];
				lett.push(let);
			}
		}
	}

	if ((FREQ['a'] == FREQ['c'] || FREQ['b'] == FREQ['c']) && lett.size() == 3 && 
		la < lb && lb < lc) {
		cout << "YES" << endl;
	}
	else
		cout << "NO" << endl;
	
}