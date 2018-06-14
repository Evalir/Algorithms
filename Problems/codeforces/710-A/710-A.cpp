#include <bits/stdc++.h>
using namespace std;

int main() {
 	string S;
 	cin >> S;
 	if (S[0] == 'a' || S[0] == 'h') {
 		if (S[1] == '1' || S[1] == '8') {
 		 	cout << 3 << endl;
 		 	return 0;
 		}
 		else {
 			cout << 5 << endl;
 			return 0;
 		}
 	}
 	else {
 		if (S[1] == '1' || S[1] == '8') {
 			cout << 5 << endl;
 			return 0;
 		}
 		else {
 			cout << 8 << endl;
 			return 0;
 		}
 	}
 	cerr << "lol" << endl;
 	return 0;
}