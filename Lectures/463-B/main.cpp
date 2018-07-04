#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include <queue>
#include <stack>
#include <map>
#include <cmath>
#include <climits>
#define joa ios_base::sync_with_stdio(false);
#define MOD 1000000007;
using namespace std;

using ll = long long;
using pll = pair<ll,ll>;
using VI = vector<int>;
using VL = vector<long>;
using VVI = vector<VI>;
using VP = vector<pll>;
int main() {
    joa
    int n;
    cin >> n;
    VI p(n);
    for(int& i : p)
        cin >> i;
    int ans = 0;
    for(int i = 0; i < n; i++) {
        int dy = ans - p[i];
        if (dy < 0)
            ans += abs(dy);
    }
    cout << ans << endl;
}