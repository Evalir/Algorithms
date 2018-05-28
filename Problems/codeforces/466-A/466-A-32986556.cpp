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

	//simulate buying one way tickets
	while (rides < N) {
		rides++;
		cost += A;
	}

	best = min(best, cost);

	//now simulate buying special tickets
	rides = 0;
	cost = 0;
	while (rides < N) {
		cost += B;
		rides += M;
		int cost1 = cost;
		int ridesc = rides;
		//cout << "BOUGHT THIS?" << endl;
		while (ridesc < N) {
			cost1 += A;
			ridesc++;	
		} 
		best = min(best, cost1);
		// if (rides + 1 == N && rides + A <= rides + B) {
		// 	cost += A;
		// 	rides++;
		// 	best = min(best, cost);
		// 	cout << best << endl;
		// 	return 0;
		// }
	}

	best = min(best, cost);

	// //simulate both
	// rides = 0;
	// cost = 0;
	// cost = B * (N / M);
	// rides = M * (N / M);
	// if (rides < N) {
	// 	cost += A;
	// 	rides++;
	// }
	// best = min (best, cost);
		//cout << "COST BEFORE IT IS " << cost << endl;
	cout << best << endl;


	// if (N % 2 == 0) {
	// 	cost = B * (N / M);
	// 	rides = M * (N / M);
	// }

	// if (rides < N) {
	// 	cost += A;
	// 	rides++;
	// }
	
	return 0;
}