#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
	vector<int> V = {1,2,4,8,16,32,64,128,256,512,1024,2048};
	int T;
	cin >> T;
	while(T--) {
		int n;
		cin >> n;
		int ans = 0;
		int sum = 0;
		bool f = 0;
		while(sum < n) {
			int pick = 0;
			for(int i = 0; i < V.size(); i++) {
				if (sum + V[i] < n) {
					pick = V[i];
				}
				else if (sum + V[i] == n) {
					sum += V[i];
					ans++;
					f = true;
					break;
				}
				else {
					break;
				}
			}
			if (!f) {
				ans++;
			}
				sum += pick;
		}
		cout << ans << endl;
	}
}
