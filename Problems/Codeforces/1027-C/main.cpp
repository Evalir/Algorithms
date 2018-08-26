#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <cstdio>
#include <map>

using namespace std;

using ll = long long;
using pll = pair<ll,ll>;
using VI = vector<int>;
using VL = vector<ll>;
using VVI = vector<VI>;

const ll INF = 1LL << 60LL;
int main() {
    int T;
    cin >> T;
    while(T--) {
        int n;
        cin >> n;
        map<int,int> f;
        for(int i = 0; i < n; i++) {
            int x;
            cin >> x;
            f[x]++;
        }
        pair<ll,pair<ll,ll>> ans;
        ans.first = INF;
        pair<ll,ll> cnt = {-1,-1};
        for(auto x : f) {
            if (x.second >= 2) {
                if (cnt.first == -1) {
                    cnt.first = x.first;
                }
                else {
                    cnt.second = x.first;
                    ll s,p;
                    s = cnt.first * cnt.second;
                    p = 2LL*(cnt.first + cnt.second);
                    if (ans.first > (p*p)/s) {
                        ans.first = (p*p)/s;
                        ans.second.first = cnt.first;
                        ans.second.second = cnt.second;
                    }
                    cnt = {x.first,-1};
                }
            }
            if (x.second >= 4) {
                ll s, p;
                s = x.first*1LL*x.first;
                p = 2LL*(x.first+x.first);
                if (ans.first > (p*p)/s) {
                    ans.first = (p*p)/s;
                    ans.second.first = x.first;
                    ans.second.second = x.first;
                }
                if (cnt.first == x.first) continue;
                else {
                    cnt.first = x.first;
                }
            }
        }
        cout << ans.second.first << " " << ans.second.first << " " << ans.second.second << " " << ans.second.second << '\n';
    }
    return 0;
}