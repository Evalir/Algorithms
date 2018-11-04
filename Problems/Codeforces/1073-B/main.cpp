#include <bits/stdc++.h>
using namespace std;
int ap[200010];
int main() {
    int n;
    scanf("%d", &n);
    vector<int> V(n);
    memset(ap,-1,sizeof(ap));
    for(auto &t : V) scanf("%d", &t);

    for(int i = 0; i < n; i++) {
        ap[V[i]] = i;
    }
    int pt = 0;
    for(int i = 0; i < n; i++) {
        int x;
        scanf("%d", &x);
        int r = ap[x] + 1;
        if (r > pt) {
            printf("%d ", r-pt);
            pt = r;
        } else {
            printf("0 ");
        }
    }
    return 0;
}