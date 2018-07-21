#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <map>
#include <set>
using namespace std;

int main() {
    int n;
    cin >> n;
    map<int,int> f;
    for(int i = 0; i < n; i++) {
        int x; cin >> x;
        ++f[x];
    }

    int ans = 0;
    for(auto fi : f) {
        if (fi.second > 1) {
            while (fi.second > 1) {
                int k = fi.first;
                --fi.second;
                while (f[k] > 1) {
                    ++ans;
                    k++;
                }
                f[k]++;
            }
        }
    }

    cout << ans << endl;
    return 0;
}