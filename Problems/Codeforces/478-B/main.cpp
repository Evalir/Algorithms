#include <cstdio>
#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;
using ll = long long;
int main() {
    ll n, m;
    scanf("%ld %ld", &n, &m);
    {
        //min
        ll x,sx,y,sy,ans;
        x = sx = y = sy = ans = 0;
        x = n/m + 1;
        sx = x*(x-1)/2;
        y = n/m;
        sy = y*(y-1)/2;
        ans = (n%m)*(sx) + (m-(n%m))*(sy);
        printf("%ld ", ans);
    }
    {
        //max
        ll x, ans;
        x = ans = 0;
        x = n-(m-1);
        ans = x*(x-1)/2;
        printf("%ld", ans);
    }
    puts("");
    return 0;
}