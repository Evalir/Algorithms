#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,a,b;
    cin >> n >> a >> b;
    int ans = 0;
    for(int i = 1; i <= min(a,b); i++) {
        int pa = a/i;
        int pb = b/i;
        if (pa + pb >= n) ans = max(ans,i);
        else break;
    }
    cout << ans << endl;
}