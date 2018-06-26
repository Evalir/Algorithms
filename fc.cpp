#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
	vector<int> V(5);
	for(int& i : V)
		cin >> i;

	for(auto i : V)
		cout << i;

	return 0;
}