#include <iostream>
#include <cmath>
using namespace std;
typedef unsigned long long ull;

int main() {
	ull n;
	cin >> n;
	ull ans = (3*n*(n+1))/2;
	cout << ans << endl;
}