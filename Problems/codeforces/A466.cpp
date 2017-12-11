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
	int N, M, A, B;
	cin >> N >> M >> A >> B;

	int rides = 0;
	int cost = 0;
	int best = INF;

	if (N*A <= B) {
		best = N*A;
		cout << best << endl;
		return 0;
	}
	
	while (rides < N) {
		cost += B;
		rides += M;
		int cost1 = cost;
		int ridesc = rides;
		while (ridesc < N) {
			cost1 += A;
			ridesc++;	
		} 
		best = min(best, cost1);
	}

	best = min(best, cost);
	cout << best << endl;
	return 0;
}