#include <iostream>
#include <math.h>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
	long long n, x;
	cin >> n >> x;
	vector<long long> subs(n, 0);
	
	for(int i = 0; i < n; i++) {
		cin >> subs[i];
	}
	
	sort(subs.begin(), subs.end());
	
	unsigned long long ans = 0;
	
	for(int i = 0; i < n; i++) {
		ans += x * subs[i];
		if (x != 1) x--;
	}
	
	cout << ans << endl;
	return 0;
}
