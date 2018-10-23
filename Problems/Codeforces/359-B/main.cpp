#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> V(2*n + 1);
    for(int i = 1; i <= 2*n; i++) V[i] = i;
    for(int i = 1; i <= 2*n && k > 0; i++, k--) swap(V[2*i-1], V[2*i]);
    for(int i = 1; i <= 2*n; i++) cout << V[i] << " ";
    puts("");
    return 0;
}