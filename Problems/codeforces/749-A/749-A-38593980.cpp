#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <map>
#include <set>
#include <string>
using namespace std;

int main() {
	int n;
	cin >> n;
	int cnt = 0;
	if (n % 2 == 0) {
		cout << n / 2 << endl;
		for(int i = 0; i < n/2; i++)
			cout << 2 << ' ';
	}
	else {
		while(n != 3) {
			cnt++;
			n -= 2;
		}
		cout << cnt+1 << endl;
		for(int i = 0; i < cnt; i++)
			cout << 2 << ' ';
		cout << 3;
	}
	return 0;
}