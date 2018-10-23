#include <bits/stdc++.h>
using namespace std;


int main() {
    int n, x;
    scanf("%d%d", &n, &x);
    vector<int> V(n), Z(n);
    map<int,int> F, FF;
    for(auto &t : V) scanf("%d", &t);
    {
        vector<int> K = V;
        sort(K.begin(), K.end());
        for(int i = 0; i < n-1; i++) {
            if (K[i] == K[i+1]) {
                puts("0");
                return 0;
            }
        }
    }
    for(int i = 0; i < n; i++) Z[i] = V[i] & x, F[V[i]]++;
    if (Z == V) {
        puts("-1");
        return 0;
    }
    int ans = 1000000000;
    for(int i = 0; i < n; i++) {
        if (F[Z[i]] && V[i] != (V[i] & x)) {
            ans = min(ans, 1);
        }
        if (FF[Z[i] & x]) {
            ans = min(ans, 2);
        }
        FF[Z[i] & x]++;
    }
    if (ans > 2) puts("-1");
    else printf("%d\n", ans);
    return 0;
}