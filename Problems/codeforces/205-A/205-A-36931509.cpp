#include <bits/stdc++.h>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int N;
	cin >> N;
	map<long long, int> FREQ;
	long long minv = 1e9+7;
	int minpos = 0;
	for(int i = 0; i < N; i++) {
		long long x;
		cin >> x;
		FREQ[x]++;
		if (x < minv) {
			minv = x;
			minpos = i+1;
		}
	}
	
	if (FREQ[minv] > 1) {
		cout << "Still Rozdil" << endl;
		return 0;
	}
	else {
		cout << minpos << endl;
	}
	
	return 0;
}