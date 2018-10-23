#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    scanf("%d%d", &n, &m);
    vector<int> V(n);
    for(auto &t : V) scanf("%d", &t);
    set<int> S;
    for(int i = 0; i < m; i++) {
        int x;
        scanf("%d", &x);
        S.insert(x);
    }
    for(int i = 0; i < n; i++)
        if (S.count(V[i])) printf("%d ", V[i]);
    puts("");
    return 0;
}