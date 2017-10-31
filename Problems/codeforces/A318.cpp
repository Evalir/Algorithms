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

int main() {
	long long N, K, oddiv;
	cin >> N >> K;
	long long res;
	
	oddiv = (N/2)+1;

	if (K <= N / 2) {
		res = (2*K-1);
		cout << res << endl;
	}
	else {
		res =  2*(K - (N+1)/2);
		cout << res << endl;
	}
 
	return 0;
}