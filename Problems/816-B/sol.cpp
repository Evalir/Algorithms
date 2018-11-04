#include <bits/stdc++.h>
using namespace std;

int a[300000];
int ps[300000];
int anw[300000];

int main() {
	int n, k, q;
	cin >> n >> k >> q;
	for(int i = 0; i < n; i++) {
		int l,r;
		scanf("%d%d", &l, &r);
		a[l]++;
		a[r+1]--;
	}
	for(int i = 0; i <= 200000; i++) {
		ps[i] = a[i];
		if (i) ps[i] += ps[i-1];
	}
	for(int i = 0; i <= 200000; i++) {
		if (ps[i] >= k) ps[i] = 1;
		else ps[i] = 0;
	}
	for(int i = 0; i <= 200000; i++) {
		anw[i] = ps[i];
		if (i) anw[i] += anw[i-1];
	}
	while(q--) {
		int l, r;
		scanf("%d%d", &l, &r);
		printf("%d\n", anw[r]-anw[l-1]);
	}
	return 0;
}
