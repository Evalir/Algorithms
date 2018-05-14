#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int T;
	cin >> T;
	while(T--) {
		vector<int> el(10);
		for(int i = 0; i < 10; i++)
			cin >> el[i];
		sort(el.begin(),el.end());
		cout << el[1] << endl;
	}
	return 0;
}
