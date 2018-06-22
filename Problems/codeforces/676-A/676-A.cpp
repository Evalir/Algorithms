#include <vector>
#include <algorithm>
#include <cmath>
#include <iostream>
#include <climits>
using namespace std;

int main() {
	int n;
	cin >> n;
	vector<int> k(n);
	for(int& i : k)
		cin >> i;
	pair<int,int> ml(101,0), hl(-1,0);

	for(int i = 0; i < n; i++) {
		if (ml.first > k[i]) {ml.first = k[i]; ml.second = i;}
		if (hl.first < k[i]) {hl.first = k[i]; hl.second = i;}
	}
	cerr << "min & index : " << ml.first << ' ' << ml.second << endl;
	cerr << "max & index : " << hl.first << ' ' << hl.second << endl;
	
	int ans = 0;
	//move big
	int x = max(abs(ml.second - (n-1)), abs(ml.second));
	//move small
	int y = max(abs(hl.second - (n-1)), abs(hl.second));
	ans = max(x,y);
	cout << ans << endl;
	return 0;

}
