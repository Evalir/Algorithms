#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <stack>
#include <queue>
#include <cmath>
#include <climits>
#include <algorithm>
#include <bitset>
#include <list>
#include <string>
#include <sstream>
#define INF (int)1e9
#define pb push_back
#define EPS 1e-9
#define all(a) (a).begin(), (a).end()
#define PI 3.1415926535897932384626
using namespace std;
typedef long long llong;
typedef unsigned long long ull;
typedef vector<int> VI;
typedef vector<VI> VII;
typedef vector<long long> VLL;
typedef pair<int, int> ii;
typedef vector<vector<ii> > Graph;
typedef map<int,int> FREQ;

struct VeniceSet {
	multiset<long long> S;
	long long water_level = 0;
	void add(long long v) {
		S.insert(v + water_level);
	}
	void remove(long long v) {
		S.erase(S.find(v + water_level));
	}
	void updateAll(long long v) {
		water_level += v;
	}
	long long getMin() {
		return *S.begin() - water_level;
	}
	long long size() {
		return S.size();
	}
};

int main(){

	long long N;
	cin >> N;
	vector<long long> V(N);
	vector<long long> T(N);
	VeniceSet PileCheck;

	for(int i = 0; i < N; i++) {
		cin >> V[i];
	}
	for(int i = 0; i < N; i++) {
		cin >> T[i];
	}

	for(int i = 0; i < V.size(); i++) {
		PileCheck.add(V[i]);
		PileCheck.updateAll(T[i]); //decrease all piles IN SET by T[i].
		long long totalPiles = T[i] * PileCheck.size(); // Get total pile subtraction.

		//get negatives caused by "over-removing" piles and correct error by increasing.
		while (PileCheck.getMin() < 0 && PileCheck.size() > 0) {
			long long lowPile = PileCheck.getMin();
			
			totalPiles -= abs(lowPile);

			PileCheck.remove(lowPile);

		}

		cout << totalPiles << ' ';

	}

	return 0;
}