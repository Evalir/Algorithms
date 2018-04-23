#include <iostream>
#include <vector>
#include <algorithm>
#define pb push_back
int main() {
	int x;
	cin >> x;
	VI el;
	for(int i = 0; i < x; i++){
		int z;
		cin >> z;
		el.pb(z);
	}

	cout << el[0] << endl;
	return 0;

}