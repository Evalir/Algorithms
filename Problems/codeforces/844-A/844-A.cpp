#include <bits/stdc++.h>
using namespace std;

int main() {
	string S;
	cin >> S;
	int n;
	cin >> n;
	set<char> k;
	for(int i = 0; i < S.size(); i++)
		k.insert(S[i]);
	signed int sz = (int)k.size();
   	if (n > S.size())
   		puts("impossible");
   	else if (sz - n < 0)
   		cout << abs(sz-n) << endl;
   	else
   		cout << 0 << endl;
   	return 0;


}