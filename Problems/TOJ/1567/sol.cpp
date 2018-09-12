#include <bits/stdc++.h>
using namespace std;

int main() {
	string s;
	getline(cin, s);
	int ans = 0;
	for(int i = 0; i < (int)s.size(); i++) {
		ans += (s[i]-'0') % 3;
		ans++;
	}
	cout << ans << endl;
}
/*
 #include <bits/stdc++.h>
using namespace std;

int main() {
	string s;
	getline(cin, s);
	int ans = 0;
	for(int i = 0; i < (int)s.size(); i++) {
		if (s[i] == 'a' || s[i] == 'd' || s[i] == 'g' || s[i] == 'j'
		|| s[i] == 'm' || s[i] == 'p' || s[i] == 's' || s[i] == 'v'
		|| s[i] == 'y' || s[i] == '.' || s[i] == ' ') ans++;
		else if (s[i] == 'b' || s[i] == 'e' || s[i] == 'h' || s[i] == 'k'
		|| s[i] == 'n' || s[i] == 'q' || s[i] == 't' || s[i] == 'w'
		|| s[i] == 'z' || s[i] == ',') ans+=2;
		else if (s[i] == 'c' || s[i] == 'f' || s[i] == 'i' || s[i] == 'l'
		|| s[i] == 'o' || s[i] == 'r' || s[i] == 'u' || s[i] == 'x') ans+=3;
	}
	cout << ans << endl;
}

 * */
