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

int GCD(int a, int b) {
   if (b==0) return a;
 
   return GCD(b,a%b);
}

int main() {
	int N;
	cin >> N;
	VI el;
	

	for(int i = 0; i < N; i++) {
		int x;
		cin >> x;
		el.push_back(x);
	}

	int G = el[0];
	for(int i = 0; i < el.size()-1; i++) {
		G = GCD(G, el[i+1]);
		if (G != el[0]) {
			cout << "-1" << endl;
			return 0;
		} else {
			continue;
		}
	}
	vector<int>newseq;
	for(int i = 0; i < el.size(); i++) {

		if (i == 0) continue;
		else {
			newseq.push_back(G);
			newseq.push_back(el[i]);
		}
	}
	cout << newseq.size() + 1 << endl;
	for (int i = 0; i < newseq.size(); ++i) {
		cout << newseq[i] << " ";
	}

	cout << G << endl;
	return 0;
}