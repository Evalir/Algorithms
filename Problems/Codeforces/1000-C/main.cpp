#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;

using ll = long long;
using pll = pair<ll,ll>;

int main() {
    int n;
    cin >> n;
    vector<pll> V;
    for(int i = 0; i < n; i++) {
        ll l,r;
        cin >> l >> r;
        ++r;
        V.push_back({l,1});
        V.push_back({r,-1});
    }

    sort(V.begin(), V.end(),
         [&] (pll a, pll b) -> bool {
             if (a.first != b.first)
                 return a.first < b.first;
             return a.second < b.second;
    });

    vector<ll> ans(n+10,0LL);
    ll cnt = 0;

    for(int i = 0; i < V.size(); i++) {
        if (i) {
            ans[cnt] += V[i].first - V[i-1].first;
        }
        cnt += V[i].second;
    }

    for(int i = 1; i <= n; i++)
        cout << ans[i] << ' ';

    return 0;
}