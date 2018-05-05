#include <vector>
#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

class TurretDefense {
	
public:
	int firstMiss(vector<int> xs, vector<int> ys, vector<int> times) {
		int ans = -1;
		vector<int> distances;
		distances.push_back(abs(xs[0]+ys[0]));
		cerr << xs[0]+ys[0] << endl;
		for(int i = 0; i < xs.size()-1; i++) {
			distances.push_back(abs(xs[i]-xs[i+1]) + abs(ys[i]-ys[i+1]));;		
		}
		for(int i = 0; i < times.size(); i++) {
			if (i == 0) {
				if (distances[i] > times[i]) {
					ans = i;
					break;
				}
			}
			else {
				if (distances[i] > abs(times[i]-times[i-1])) {
					ans = i;
					break;
				}
			}
		}
		return ans;
	}
};

int main() {
	TurretDefense i;
	vector<int> xs = {3,5,6},ys = {7,5,6},times = {11,15,16};
	int ans = i.firstMiss(xs,ys,times);
	cout << ans << endl;
}
