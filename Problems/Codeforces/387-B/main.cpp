#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <set>
#include <queue>
#include <string.h>
using namespace std;
bool u[(int)1e6+10];

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> s(n), f(m);
    for(int &t : s) cin >> t;
    for(int &t : f) cin >> t;
    sort(f.begin(), f.end());
    int ans = 0;
    int pt = 0;
    for(int &t : s) {
        if (pt < m) {
            while(pt < m && f[pt] < t)
                pt++;
            if (pt < m) {
                if (f[pt] == t) t = -1;
                else if (f[pt] > t) t = -1;
            }
        }
        else
            continue;
    }
    for(int &t : s) {
        if (t != -1) ans++;
    }
    cout << ans << endl;
    return 0;
}