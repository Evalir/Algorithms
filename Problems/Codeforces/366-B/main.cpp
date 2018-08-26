#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <numeric>

using namespace std;
using ll = long long;
int main() {
    int n, k;
    cin >> n >> k;
    vector<int> s(k);
    for(int i = 0; i < n; i++) {
        int x;
        cin >> x;
        s[i%k] += x;
    }
    pair<int,ll> ans = {-1,(int)1e9};
    ll cnt = 0;
    for(int i = 0; i < k; i++) {
        if (s[i] < ans.second) {
            ans.second = cnt;
            ans.first = i;
        }
    }
    cout << ans.first+1 << endl;
    return 0;
}