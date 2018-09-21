#include <bits/stdc++.h>
using namespace std;
bool u[100010];
bool S[100100];
bool g[100100];
int main() {
    int n;
    cin >> n;
    memset(u,0,sizeof(u));
    memset(g,0,sizeof(g));
    memset(S,0,sizeof(g));
    vector<long long> V(n), R(n+1, 0);
    for(auto &i : V) cin >> i;
    for(int i = n-1; i >= 0; i--) {
        R[i] = R[i+1];
        if (g[V[i]])
            R[i]++;
        g[V[i]] = true;
    }
    long long ans = 0;
    for(int i = 0; i < n; i++) {
        if (!S[V[i]]) {
            ans += V.size() - (i + 1);
            ans -= R[i + 1];
        }
        S[V[i]] = true;
    }
    cout << ans << endl;
    return 0;
}