#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, m;
	scanf("%d%d", &n, &m);
	map<int,int> f;
	for(int i = 1; i <= n; i++) f[i] = 0;
	for(int i = 0; i < m; i++) {
		int x;
		cin >> x;
		f[x]++;
	}
	for(auto i : f) {
		if (i.second > 0) {
			printf("%.02lf", (i.second*1.00 / m*1.00)*100.00);
			printf("\%\n");
		}
		else
			cout << "0.00%" << endl;
	}
	return 0;
}
