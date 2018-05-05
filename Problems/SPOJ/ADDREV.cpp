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
#define INF (int)1e9
using namespace std;
typedef long long llong;
typedef unsigned long long uint64;
typedef vector<int> VI;
typedef vector<VI> VII;

int main() {
	int N;
	cin >> N;
	for(int i = 0; i < N; i++) {
		int a = 0, b = 0;
		cin >> a >> b;
		int ra = 0,rb = 0;
		while(a > 0) {
			ra = 10*ra+(a % 10);
			a /= 10;
		}

		while(b > 0) {
			rb = 10*rb+(b%10);
			b /= 10;
		}

		int sum = ra+rb;
		int ans = 0;
		while(sum > 0) {
			ans = 10*ans+(sum%10);
			sum /= 10;
		}
		cout << ans << endl;
	}
	return 0;
}