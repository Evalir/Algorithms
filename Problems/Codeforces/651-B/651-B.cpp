#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
	int n;
	cin >> n;
	int ans = 10000000; //tate tranquila erica
	vector<int> V(n), K(1009);
	for(int& i : V) {
		cin >> i;
		++K[i];
	}
	for(int& i : V)
		ans = min(ans,n-K[i]);
	cout << ans << endl;
	return 0;
}