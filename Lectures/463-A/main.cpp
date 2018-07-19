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
    int n, s;
    cin >> n >> s;
    vector<pair<int,int> > V(n);
    for(int i = 0; i < n; i++)
        cin >> V[i].first >> V[i].second;

    int ans = -1;

    for(int i = 0; i < n; i++) {
        if (s > V[i].first) {
            //cerr << V[i].first << ' ' << V[i].second << endl;
            if (V[i].second != 0)
                ans = max(ans, 100-V[i].second);
            else
                ans = max(ans,0);
        }
        else if (s == V[i].first && V[i].second == 0)
            ans = max(ans,0);
        else
            continue;
    }
    cout << ans << endl;
    return 0;
}