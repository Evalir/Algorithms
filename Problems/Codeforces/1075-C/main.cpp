#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;
using Long = long long;

struct Event {
    Long pos, y, id;
    bool operator < (const Event &o) const {
        if (pos != o.pos) return pos < o.pos;
        return y < o.y;
    }
};
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    Long n, m;
    cin >> n >> m;
    vector<int> y(n), SX(m), EX(m), PX(m);
    for(int i = 0; i < n; i++) cin >> y[i];
    for(int i = 0; i < m; i++) cin >>  SX[i] >> EX[i] >> PX[i];
    vector<Event> E;
    for(int i = 0; i < m; i++) {
        E.push_back({SX[i], PX[i], i});
        E.push_back({EX[i], PX[i], i});
    }
    sort(E.begin(), E.end());
    Long bst = (1LL << 40LL);
    int cnt = 0;
    for(int i = 0; i < E.size(); i++) {

    }
    return 0;
}