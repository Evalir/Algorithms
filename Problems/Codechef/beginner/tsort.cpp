#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int T;
	cin >> T;
	vector<int> V(T);
	int idx = 0;
	while(T--) {
		cin >> V[idx];
		idx++;
	}
	sort(V.begin(), V.end());
	for(int i = 0; i < V.size(); i++)
		cout << V[i] << endl;
}
