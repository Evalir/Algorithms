#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	vector<int> k(n);
	for(int& i : k)
		cin >> i;

   	if ((n&1) && (k[0]&1) && (k[n-1]&1))
   		puts("yes");
   	else
   		puts("no");
   	return 0;

}