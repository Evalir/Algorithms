#include <cstdio>
#include <cmath>
#include <algorithm>
using namespace std;
using ll = long long;
int main() {
	ll r,x1,y1,x2,y2;
	scanf("%lld %lld %lld %lld %lld", &r, &x1, &y1, &x2, &y2);
	double dis = sqrt((x2-x1)*(x2-x1)*1.00 + (y2-y1)*(y2-y1)*1.00);
	ll ans = ceil(dis*1.00/((2*r)*1.00))*1LL;
	printf("%lld", ans);
	puts("");
	return 0;
}