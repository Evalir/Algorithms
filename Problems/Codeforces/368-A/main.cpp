#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,d;
    scanf("%d%d",&n,&d);
    vector<int> V(n);
    vector<int> PS(n);
    for(int i = 0; i < n; i++) scanf("%d", &V[i]);
    sort(V.begin(),V.end());
    for(int i = 0; i < n; i++) {
        PS[i] = V[i];
        if (i) PS[i] += PS[i-1];
    }
    int m;
    scanf("%d", &m);
    m--;
    if (m <= n - 1) {
        cout << PS[m] << endl;
    } else if (m > n - 1) {
        cout << PS[n-1] - (abs((m+1)-n))*d << endl;
    }
    return 0;
}