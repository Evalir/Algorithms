#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <stack>
#include <queue>
#include <algorithm>
#define INF (int)1e9
using namespace std;
typedef long long llong;
typedef unsigned long long uint64;
typedef vector<int> VI;
typedef vector<VI> VII;

int main() {
	int N;
	int low = 10000000;
	int best = 0;
	cin >> N;
	VI el;
	map<int, int> li;

	for(int i = 0; i < N; i++) {
		int x;
		cin >> x;
		el.push_back(x);
		li[x] = i; //jot last ocurrence
	}

	for(auto x : li) {
		if (x.second < low) {
			best = x.first;
			low = x.second;
		}
	}

	cout << best << endl;

	return 0;
}