#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
	int t;
	cin >> t;
	int c = 1;
	while(t--) {
		vector<int> players;
		int n;
		cin >> n;
		double s = 0;
		for(int i = 0; i < n; i++) {
			double x;
			cin >> x;
			s += x;
			players.push_back((int)x);
		}
		double ans = ceil(s/n);
		int a = 0;
		sort(players.begin(), players.end());
		int l = 0, h = 0;
		for(int i = 0; i < n; i++) {
			for(int j = 0; j < n; j++) {
				if (i != j) {
					if (players[j] < players[i])
						l++;
					else
						h++;
				}
			}
			if (l == h)
			{
				a = players[i];
				break;
			}
			l = 0;
			h = 0;
		}
		cout << "Case " << c << ": " << a << endl;
		c++;
	}
}