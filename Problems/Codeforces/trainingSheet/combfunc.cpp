#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;
typedef long long ll;

ll factorial(ll n) {
	if (n == 0 || n == 1)
		return 1;
	else 
		return n * factorial(n-1);
}
ll nck(ll n, ll k) {
	return factorial(n)/(factorial(n-k) * factorial(k));
}

int main() {
	ll n, k;
	cin >> n >> k;

	cout << nck(n,k) << endl;
}