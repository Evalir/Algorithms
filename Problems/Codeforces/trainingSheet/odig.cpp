#include <cstdio>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
	int T;
	scanf("%d", &T);
	while(T--) {
		int a, b;
		scanf("%d %d", &a, &b);
		int maxk = max(a,b);
		int mink = min(a,b);
		maxk--, mink++;
		int ans = 0;
		for(int i = mink; i <= maxk; i++) {
			if (i % 2 != 0)
				ans += i;
		}
		printf("%d\n", ans);
	}
	return 0;
}