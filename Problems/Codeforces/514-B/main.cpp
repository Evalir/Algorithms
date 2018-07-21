#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <cstdio>
using namespace std;
using ii = pair<int,int>;
bool d[1010];
int main() {
    int n, xi, yi, ans = 0;
    scanf("%d %d %d",&n, &xi, &yi);
    vector<ii> p(n);
    for(ii& i : p)
        scanf("%d %d", &i.first, &i.second);
    for(int i = 0; i < n; i++) {
        if (d[i]) continue;
        d[i] = true;
        int sx = p[i].first - xi;
        int sy = p[i].second - yi;
        for(int j = i+1; j < n; j++) {
            if (d[j]) continue;
            int sx2 = p[j].first - xi;
            int sy2 = p[j].second - yi;
            if (sy*sx2 == sx*sy2) d[j] = true;
        }
        ++ans;
    }
    cout << ans << endl;
    return 0;
}