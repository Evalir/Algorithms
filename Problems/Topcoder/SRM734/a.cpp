#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <set>
#include <queue>
#include <cmath>
#include <string>
using namespace std;

class TheRoundCityDiv2 {
public:
	int find(int r) {
		int x = r*-1;
		int y = r*-1;
		int ans = 0;
		for(int i = x; i <= r; i++) {
			for(int j = y; j <= r; j++) {
				if (i == 0 && j == 0)
					continue;
				double dist = sqrt(i*i + j*j);
				if (dist <= r) {
					//cout << i << ' ' << j << ' ' << dist << endl;
					ans++;
				}
			}
		}
		return ans;
	}
};
