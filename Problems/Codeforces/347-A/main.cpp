#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    scanf("%d", &n);
    vector<int> V(n);
    for(auto &t : V) scanf("%d", &t);
    sort(V.begin(),V.end());
    swap(V[0], V[n-1]);
    for(auto t : V) printf("%d ", t);
    puts("");
    return 0;
}