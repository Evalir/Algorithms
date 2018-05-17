#include <iostream>
#include <vector>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
		vector<int> freq(1000,0);
		string S;
		cin >> S;
		for(int i = 0; i < S.size(); i++)
			freq[S[i]]++;
		char ans;
		int a = 0;
		for(int i = 0; i < freq.size(); i++)
			if (freq[i] > a) {
				ans = i;
				a = freq[i];
			}
		cout << a << ' ' << ans << endl;
	}
	return 0;
		
}
