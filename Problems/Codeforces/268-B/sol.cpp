#include <bits/stdc++.h>
using namespace std;
using Long = long long;

int main() {
	Long N;
	scanf("%lld", &N);
	Long ans = 0;
	for(Long i = 1; i < N; i++) {
		ans += (N-i)*i;
	}
	printf("%lld\n", ans+N);
	return 0;
}