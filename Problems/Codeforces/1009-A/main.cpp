#include <iostream>
#include <vector>
#include <stack>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
    int a,b;
    cin >> a >> b;
    vector<int> v(a), z(b);
    for(int &t : v) cin >> t;
    for(int i = 0; i < b; i++) cin >> z[i];
    int pt = 0;
    int ans = 0;
    for(int i = 0; i < a; i++) {
        if (pt >= b) break;
        int t = z[pt];
        if (t >= v[i]) {
            ++ans;
            ++pt;
        }
        else
            continue;
    }
    cout << ans << endl;
    return 0;
}