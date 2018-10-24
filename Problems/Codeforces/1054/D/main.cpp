#include <bits/stdc++.h>
using namespace std;
using Long = long long;
int main() {
    int n, k;
    cin >> n >> k;
    map<int,int> M;
    M[0] = 1;
    int K = (1 << k) - 1;
    int pf = 0;
    Long ans = 0;
    for(int i = 0; i < n; i++) {
        int x;
        cin >> x;
        pf ^= x;
        int dam = i;
        int a = M.count(pf) ? M[pf] : 0;
        int b = M.count(K^pf) ? M[K^pf] : 0;
        if (a <= b) {
            dam = a;
        } else {
            dam = b;
            pf ^= K;
        }
        ans += (i + 1) - dam;
        M[pf]++;
    }
    cout << ans << endl;
    return 0;
}