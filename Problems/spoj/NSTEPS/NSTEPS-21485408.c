#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int N;
	cin >> N;
	while(N--) {
		int a, b;
		cin >> a >> b;
		if (a == b ||b == a-2){
			if (a % 2 == 0 && b % 2 == 0)
				cout << a+b << "\n";
			else
				cout << a+b-1 << "\n";
		}
		else
			cout << "No Number\n";
	}
	return 0;
}