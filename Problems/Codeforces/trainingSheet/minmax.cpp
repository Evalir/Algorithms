#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int n;
	cin >> n;
	vector<int> V(n);
	for(int i = 0; i < n; i++)
		cin >> V[i];
	pair<int,int> mind,maxd;
	mind.first = (int)1e9;
	maxd.first = (int)-1e9;
	for(int i = 0; i < n; i++) {
		if (mind.first > V[i]) {
			mind.first = V[i];
			mind.second = i;
		}
		if (maxd.first < V[i]) {
			maxd.first = V[i];
			maxd.second = i;
		}
	}
	swap(V[mind.second],V[maxd.second]);
	for(int i = 0; i < n; i++)
		cout << V[i] << ' ';
	return 0;
}
