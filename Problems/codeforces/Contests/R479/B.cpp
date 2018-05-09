#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <string>
#include <set>
#include <map>
using namespace std;

int main() {
	int n;
	cin >> n;
	string A;
	cin >> A;
	map<string, int> FREQ;
	for(int i = 0; i < n-1; i++) {
		string a;
		a += A[i];
		a += A[i+1];
		FREQ[a]++;
	}
	pair<string,int> mg;
	mg.first = "";
	mg.second = -1;
	for(auto x : FREQ) {
		//cout << x.first << ' ' << x.second << endl;
		if (x.second > mg.second) {
			mg.first = x.first;
			mg.second = x.second;
		}
	}
	cout << mg.first << endl;
	return 0;
}
