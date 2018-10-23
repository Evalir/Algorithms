#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    scanf("%d%d",&n,&m);
    vector<int> V(n), INC(n), DEC(n);
    for(auto &t : V) scanf("%d", &t);
    INC[0] = 0;
    DEC[n-1] = n - 1;
    for(int i = 0; i < n; i++) {
        if (i) {
            if (V[i-1] < V[i]) INC[i] = i;
            else INC[i] = INC[i-1];
        }
    }
    for(int i = n-2; i >= 0; i--) {
        if (V[i] > V[i+1]) DEC[i] = i + 1;
        else DEC[i] = DEC[i+1];
    }
    while(m--) {
        int l,r;
        scanf("%d%d", &l, &r);
        l--,r--;
        bool ok = true;
        if (DEC[l] < INC[r]) ok = false;
        if (!ok) puts("No");
        else puts("Yes");
    }
    return 0;
}