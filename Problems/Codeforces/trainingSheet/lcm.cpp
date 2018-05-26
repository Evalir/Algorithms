#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;
typedef long long ll;
ll gcd(ll a, ll b) {
   if (a < 0) a = -a;
   if (b < 0) b = -b;
   if (a < b) swap(a, b);
   while (b > 0) {
      ll t = b;
      b = a % b;
      a = t;
   }
   return a > 0 ? a : 1;
}
ll lcm(ll a, ll b) {
// a*b/gcd(a,b) overflows !!!
   return a / gcd(a,b) * b;
}

int main() {
	ll a, b;
	cin >> a >> b;
	cout << abs(lcm(a,b)) << endl;
	return 0;
}