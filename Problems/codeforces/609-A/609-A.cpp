#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,m;
    cin >> n >> m;
    vector<int>  v(n);
    for(int &t : v) cin >> t;
    sort(v.begin(), v.end(), greater<int>());
    int sum = 0, ans = 0;
    for(int &t : v) {
        sum += t;
        ans++;
        if (sum >= m)
            break;
    }
    cout << ans << endl;
    return 0;
}