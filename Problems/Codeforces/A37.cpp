#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;

int main() {
	int n;
	cin >> n;
	map<int,int> freq;
	int a = 0;
	for(int i = 0; i < n; i++) {
		int  x;
		cin >> x;
		freq[x]++;
		a = max(a, freq[x]);
	}
	
	cout << a << ' ' << freq.size() << endl;
	return 0;
}