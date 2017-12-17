
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
	int T;
	cin >> T;

	for(int i = 0; i < T; i++){
		int N;
		cin >> N;
		VI el;

		for(int i = 0; i < N; i++) {
			int x;
			cin >> x;
			el.push_back(x);
		}

		sort(el.begin(), el.end());
		int l = el[0], r = el[N-1];

		cout << 2 * (r - l) << endl;
	}

	return 0;
}