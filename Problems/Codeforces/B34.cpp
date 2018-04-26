#include <algorithm>
#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> tvs;
    for(int i = 0; i < n; i++) {
        int x;
        cin >> x;
        if (x < 0)
            tvs.push_back(x);
    }
    sort(tvs.begin(), tvs.end());
    int ans = 0;
    for(int i = 0; i < tvs.size(); i++) {
        if (m > 0) {
            ans += abs(tvs[i]);
            m--;
        }
    }
    cout << ans << endl;
    return 0;
    
}
