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

	while (rides < N) {

		if (M*A <= B) {
			rides++;
			cost += A;
			cout << "BOUGHT SINGLE" << "COST IS: " << cost<<endl;
		}
		else {
			
		}
	}

	cout << cost << endl;
	return 0;
}