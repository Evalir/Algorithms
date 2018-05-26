#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;
typedef long long ll;
int main() {
	ll a, b;
	cin >> a >> b;
	ll nA = a*(a+1)/2;
	ll nB = b*(b+1)/2;
	cout << max(nA,nB)-min(nA,nB)+min(a,b) << endl;
	return 0;
}