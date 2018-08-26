#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <numeric>
#include <string>
#include <cstring>
#include <map>

using namespace std;
bool u[1010];
int main() {
    string a, b;
    cin >> a >> b;
    memset(u,0, sizeof(u));
    map<char,int> fa, fb;
    for(auto &t : a) {
        fa[t]++;
    }
    for(auto &t : b) {
        fb[t]++;
    }
    int ans = 0;
    for(auto &t : b) {
        if (!fa.count(t)) {
            cout << -1 << '\n';
            return 0;
        }
        if (!u[t]) {
            u[t] = true;
            ans += min(fa[t], fb[t]);
        }
    }
    cout << (!ans ? -1 : ans) << endl;
    return 0;
}