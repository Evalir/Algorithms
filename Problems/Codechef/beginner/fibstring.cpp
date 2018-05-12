#include <iostream>
#include <string>
#include <map>
#include <cmath>
#include <algorithm>
using namespace std;

int main() {
	int T;
	cin >> T;
	while(T--) {
		string S;
		cin >> S;
		map<char,int> FREQ;
		for(int i = 0; i < S.size(); i++) {
			FREQ[S[i]]++;
		}
		bool f = 0;
		if (FREQ.size() < 3) {
			cout << "Dynamic" << endl;
			continue;
		}
		for(auto x : FREQ) {
			for(auto y : FREQ) {
				for(auto z : FREQ) {
					if (x.first != y.first && z.first != x.first && z.first != y.first) {
						if (x.second + y.second == z.second) {
							cout << "Dynamic" << endl;
							f = 1;
							break;
						}
					} 
				}
				if (f)
					break;
			}
			if (f)
				break;
		}
		if(!f)
			cout << "Not" << endl;
	}
	return 0;
}
