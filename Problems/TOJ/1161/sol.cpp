#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	priority_queue<double> PQ;
	for(int i = 0; i < n; i++) {
		double x; cin >> x;
		PQ.push(x);
	}
	double ans = 0;
	int cnt = 0;
	while(!PQ.empty()) {
		if (!cnt) {
			ans = PQ.top(); PQ.pop();
			cnt++;
		}
		else {
			double temp = PQ.top(); PQ.pop();
			ans = 2*sqrt(ans*temp);
		}
	}
	printf("%.02f\n", ans);
	return 0;
}
