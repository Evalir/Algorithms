#include <bits/stdc++.h>
using namespace std;
bool fp[100010];
int main() {
    int n;
    scanf("%d",&n);
    vector<int> V(n);
    for(auto &t : V) scanf("%d", &t);
    int ans = 0;
    memset(fp,0,sizeof(fp));
    for(int i = 0; i < n; i++) if (V[i] == i) {ans++; fp[i] = true;}
    int cnt = 0;
    for(int i = 0; i < n; i++) {
        if (fp[i]) continue;
        if (V[V[i]] == i) cnt = max(cnt, 2);
        else cnt = max(cnt, 1);
    }
    printf("%d\n", min(ans + cnt, n));
    return 0;
}