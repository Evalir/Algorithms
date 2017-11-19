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
	VI mem(N, 0);
	for(int i = 1; i <= N; i++) {
		int x;
		cin >> x;
		mem[x] = i;
	}

	for(int i = 1; i <= N; i++) {
		cout << mem[i] << " ";
	}
	return 0;
}