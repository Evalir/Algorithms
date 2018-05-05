#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

class WidgetRepairs {
public:
	int days(vector<int> arrivals, int numPerDay) {
		int ans = 0;
		int q = 0;
		for(int i = 0; i < arrivals.size(); i++) {
			q += arrivals[i];
			if (q > 0)
				ans++;
			q -= numPerDay;
			if (q < 0)
				q = 0;
		}
		while (q > 0) {
			ans++;
			q -= numPerDay;
		}
		return ans;
	}
};
