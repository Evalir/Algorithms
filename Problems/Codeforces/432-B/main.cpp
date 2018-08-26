#include <cstdio>
#include <vector>
#include <cmath>
#include <algorithm>
#include <map>
#include <set>
#include <queue>
#include <string.h>
using namespace std;
int h[100005];
int main() {
    int n;
    scanf("%d", &n);
    vector<pair<int,int> > s(n);
    memset(h,0,sizeof(h));
    for(auto &t : s)
        scanf("%d %d", &t.first, &t.second), h[t.first]++;
    for(auto &t : s) {
        int col = h[t.second];
        int ans = n-1;
        printf("%d %d\n", ans+col, (n-1)-col);
    }
    return 0;
}