#include <cstdio>
#include <vector>
#include <algorithm>
#include <cmath>
#include <set>
#include <map>
using namespace std;

int main() {
	int n,r;
	scanf("%d %d", &n, &r);
	vector<int> disks(n);
	for(int i = 0; i < n; i++)
		scanf("%d", &disks[i]);
	vector<double> pdisks;
	for(int i = 0; i < n; i++) {
		double dy = r;
		for(int j = 0; j < i; j++) {
			if (abs(disks[i]-disks[j] <= 2*r)) {
				double dx = disks[i]-disks[j];
				double dist = sqrt(4*r*r - dx*dx);
				dy = max(dy,dist+pdisks[j]);
			}
		}
		pdisks.push_back(dy);
	}
	for(int i = 0; i < n; i++)
		printf("%.10lf ", pdisks[i]);
	return 0;
}
