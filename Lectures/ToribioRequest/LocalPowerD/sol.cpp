#include <bits/stdc++.h>
using namespace std;

void gen(int a, int b) {
	int cnt = 0;
	int x = a, y = b;
	while((x + y) % 2 != 1) {
		cnt++;
		x = (x+y)/2;
	}
	cout << "Steps: " << cnt << endl;
	for(int i = 1; i < 1000; i++) {
		cnt = 0;
		y = b;
		while((i + y) % 2 != 1) {
			cnt++;
			y = (i+y)/2;
		}	
		cout << "For i " << i << " steps " << cnt << endl;
	}
}

int main() {
	gen(2,8);
}