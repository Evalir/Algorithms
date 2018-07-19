#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <numeric>
using namespace std;

using ll = long long;
using VL = vector<long>;

int main() {
    int k;
    cin >> k;
    vector<pair<ll,pair<ll,ll>>> V;
    for(int i = 0; i < k; i++) {
        int n;
        cin >> n;
        vector<ll> t(n);
        for(ll& j : t)
            cin >> j;
        ll sum = accumulate(t.begin(), t.end(), 0);
        for(int j = 0; j < n; j++)
            V.push_back({sum-t[j], {i,j}});
    }

    sort(V.begin(), V.end());
    for(int i = 0; i < (int)V.size()-1; i++) {
        if (V[i].first == V[i+1].first && (V[i].second.first !=  V[i+1].second.first)) {
            cout << "YES" << endl;
            cout << V[i+1].second.first + 1 << ' ' << V[i+1].second.second + 1 << endl;
            cout << V[i].second.first + 1 << ' ' << V[i].second.second + 1 << endl;
            return 0;
        }
    }

    cout << "NO" << endl;
    return 0;
}