#include <bits/stdc++.h>
using namespace std;

int main() {
	int highv = -1, counter = 0;
	int highpos;
	for(int i = 0; i < 100; i++) {
		counter++;
		int x;
		cin >> x;
		if (x > highv) {
			highv = x;
			highpos = counter;
		}	
	}

	cout << highv << endl;
	cout << highpos << endl;
	return 0;
}