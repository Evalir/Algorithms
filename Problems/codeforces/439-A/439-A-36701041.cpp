#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, d;
    cin >> n >> d;
    int sum = 0;
    for(int i = 0; i < n; i++) {
        int x; cin >> x;
        sum += x;
    }
    
    int rt = (n-1)*10;
    int lj = rt/5;
    int leftover = (d-(rt+sum));
    int ans = 0;
    if (leftover < 0) {
        cout << -1 << endl;
        return 0;
    }
    ans += leftover/5;
    ans += lj;
    cout << ans << endl;
}