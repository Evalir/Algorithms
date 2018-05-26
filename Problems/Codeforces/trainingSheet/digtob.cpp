#include <iostream>
#include <vector>
#include <string>
using namespace std;
typedef long long ll;
int main() {
	ll n;
	cin >> n;
	string B;
	while(n > 0) {
		B += (n % 2) + '0';
		n /= 2;
	}
	for(int i = B.size()-1; i >= 0; i--) {
		cout << B[i];
	}
	cout << endl;
	return 0;
}