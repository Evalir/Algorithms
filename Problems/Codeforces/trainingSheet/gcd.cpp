#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <stack>
#include <queue>
#include <cmath>
#include <algorithm>
#include <bitset>
#include <list>
#define INF (int)1e9;
using namespace std;
typedef long long llong;
typedef unsigned long long uint64;
typedef vector<int> VI;
typedef vector<VI> VII;

int gcd(int a, int b) {
   if (a < 0) a = -a;
   if (b < 0) b = -b;
   if (a < b) swap(a, b);
   while (b > 0) {
      int t = b;
      b = a % b;
      a = t;
   }
   return a > 0 ? a : 1;
}


int main() {
	long long a,b;
	cin >> a >> b;
	cout << gcd(a,b) << endl;
	return 0;
}
