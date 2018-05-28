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

bool isPrime(int N) {
	if (N <= 3)
		return true;
	else
		for(int i = 2; i*i <= N; i++) {
			if (N % i == 0)
				return false;
			else
				continue;
		}
	return true;
}


int main() {
	int T;
	cin >> T;
	while(T--) {
		int a, b;
		cin >> a >> b;
		for(int i = a; i <= b; i++) {
			if (i == 1)
				continue;
			if (isPrime(i))
				cout << i << endl;
		}
		cout << endl;
	}
	return 0;
}