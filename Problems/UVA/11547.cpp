#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <stack>
#include <queue>
#include <cmath>
#include <algorithm>
#include <sstream>
#include <bitset>
#include <list>
#define INF (int)1e9
using namespace std;
typedef long long llong;
typedef unsigned long long uint64;
typedef vector<int> VI;
typedef vector<VI> VII;

int joaGetTen(int a) {
	int b = a % 100;
	int num = 0;
	int counter = 0;
	for(int i = 1; i < 100; i++) {
		if (i % 10 == 0) {
			num++;
		}
		if (i == abs(b)) break;
	}
	return num;
}
int main() {
	int T;
	cin >> T;

	for(int i = 0; i < T; i++) {
		int N;
		cin >> N;
		int ans = (((((N*567) / 9) + 7492) * 235) / 47) - 498;
		//cout << ans << endl;
		int a = joaGetTen(ans);
		cout << a << endl;
	}
	
	return 0;
}