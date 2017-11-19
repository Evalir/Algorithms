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
   //cout << b << " " << a%b << endl;
   return GCD(b,a%b);
}

int main() {
	int N;
	cin >> N;
	VI el;
	VI freq(N, 0);

	for(int i = 0; i < N; i++) {
		int x;
		cin >> x;
		freq[x]++;
		el.push_back(x);
	}

	multiset<int> seq;
	set<int> atseq;
	for(int i = 0; i < N-1; i++) {
		seq.insert(GCD(el[i], el[i+1]));
	}

	for(int i = 0; i < el.size(); i++) {
		if (seq.count(el[i]) <= 1){
			cout << el[i] << endl;
			atseq.insert(el[i]);
		}
	}


	if(atseq.size() != 0) {
		cout << atseq.size() << endl;
		for(int x: atseq) {
			cout << x << " ";
		}
	}
	else {
		cout << -1 << endl;
	}

	return 0;
}