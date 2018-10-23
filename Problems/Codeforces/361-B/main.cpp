#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    scanf("%d%d", &n,&k);
    if (n == k) {
        puts("-1");
        return 0;
    }
    vector<int> V(n);
    for(int i = 0; i < n; i++) {
        V[i] = i + 2;
        if (i == n-1) V[i] = 1;
    }
    int pt = n-1;
    while(k--) {
        swap(V[pt], V[pt-1]);
        pt--;
    }
    for(auto &t : V) printf("%d ", t);
    puts("");
    return 0;
}