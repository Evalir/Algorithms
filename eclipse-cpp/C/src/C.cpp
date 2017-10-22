#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
	string s;
	cin >> s;
	long long cnt;
	while(s.length() > 1){
		for(int i=0; i<s.length(); i++){
			cnt += s[i]-'0';
		}
		itoa(cnt);
	}
	cout << s << endl;
	return 0;
}
